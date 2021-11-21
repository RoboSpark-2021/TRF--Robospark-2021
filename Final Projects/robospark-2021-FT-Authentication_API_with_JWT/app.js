const express = require('express');
const bcrypt = require("bcryptjs");
const app = express();
const hbs = require('hbs');
const path = require('path');
require("./conn");
const Register = require("./regesters");
const jwt = require("jsonwebtoken");
const cookieParser = require("cookie-parser");
const auth = require("./middleware/auth");
app.set("view engine", 'hbs');
const templatepath = path.join(__dirname, "../templates/views")
console.log(templatepath);
app.set("views", templatepath)
app.use(express.json())
app.use(express.urlencoded({ extended: false }))
app.use(cookieParser());


app.get("/", (req, res) => {
    // res.send("hello guys i am using express ")
    res.render("index.hbs")

})
app.get("/secret", auth ,(req, res) => {
    // console.log(`The cookie is ${req.cookies.jwt}`);
    res.send("You are on the secret Page");

})

app.get("/register", (req, res) => {
    // res.send("hello from about page")
    res.render("register.hbs")
})
// for create new user
app.post("/register", async (req, res) => {
    try {
        const password = req.body.password;
        const cpassword = req.body.confirm_password;
        if (password == cpassword) {
            const registerUser = new Register ({

                username: req.body.username,
                password: req.body.password,
                confirm_password: req.body.confirm_password,
                Email: req.body.email
            })


            console.log("Register :" + registerUser);
            const token = await registerUser.generateToken();
            console.log("Token: " + token);
            console.log("Token generated");

            res.cookie("jwt", token);
            console.log("cookie generated");

            const register = await registerUser.save();
            res.status(201).send("Register Succesfully");
        }
        else {

            res.send("password are not matching")

        }


    }
    catch (error) {
        res.status(400).send(error);
        console.log("Error");
    }

})

app.get("/login", (req, res) => {
    res.render("login.hbs")
})
app.post("/login", async (req, res) => {
    try {

        const email = req.body.email;
        const password = req.body.password;
        const useremail = await Register.findOne({ Email: email });
        // const isMatch = await bcrypt.compare(password, useremail.password);
        const token = await useremail.generateToken();
        //  console.log("Token generated");

         res.cookie("jwt", token);   

        if (useremail.password == password) {
            res.status(201).render("secret.hbs")
        }
        else {
            res.send("Invalid Login Details")
        }
        
         
    }
    catch (error) {
        res.status(400).send("invalid Email");


    }

})

app.get("/index", (req, res) => {
    res.send("hello from about page")
})
app.listen(8000, () => {

    console.log('listening to the port 8000');
})
