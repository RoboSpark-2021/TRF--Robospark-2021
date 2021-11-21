const express = require('express');
const passport = require('passport');
const cookieSession = require('cookie-session');
var path = require('path');
require('./passport');

const app = express();

var options = {
    root: path.join(__dirname)
};

app.use(cookieSession({
    name: 'google-auth-session',
    keys: ['googleLogin']
}))

app.use(cookieSession({
    name: 'facebook-auth-session',
    keys: ['fbLogin']
}))

app.use(cookieSession({
    name: 'github-auth-session',
    keys: ['githubLogin']
}))

const isLoggedIn = (req, res, next) => {
    if (req.user) {
        next();
    } else {
        res.sendStatus(401);
    }
}

app.use(passport.initialize());
app.use(passport.session());
// server static files (CSS/Images)
app.use(express.static(__dirname + '/public'));

// function requireHTTPS(req, res, next) {
//     // The 'x-forwarded-proto' check is for Heroku
//     if (!req.secure && req.get('x-forwarded-proto') !== 'https' && process.env.NODE_ENV !== "development") {
//         return res.redirect('https://' + req.get('host') + req.url);
//     }
//     next();
// }

// app.use(requireHTTPS);

const port = process.env.PORT || 3000

app.get("/", (req, res) => {
    // res.send("You are not logged in")
    res.sendFile('templates/login.html', options);
})

app.get("/failed", (req, res) => {
    res.send("Failed")
})


app.set('views', './templates')
app.set('view engine', 'ejs')

app.get("/success", isLoggedIn, (req, res) => {
    // res.sendFile('templates/index.html', options);
    res.render('index', { name: req.user.displayName, image : req.user.photos ? req.user.photos[0].value : 'img/unknown.jpg' });
})

app.get("/success-github", isLoggedIn, (req, res) => {
    // res.send(`hello ${req.user.username}`);
    res.render('index', { name: req.user.username, image : req.user.photos ? req.user.photos[0].value : 'img/unknown.jpg' });
})

app.get('/google',
    passport.authenticate('google', {
        scope: ['email', 'profile']
    }));

app.get('/google-callback',
    passport.authenticate('google', {
        failureRedirect: '/failed',
    }),

    function (req, res) {
        res.redirect('/success')
    }
);

app.get('/facebook', passport.authenticate('facebook'));

app.get('/fb-callback', passport.authenticate('facebook', { failureRedirect: '/failed' }),
    function (req, res) {
        res.redirect('/success');
    });

app.get('/github',
    passport.authenticate('github', {
        scope: ['user:email']
    }));

app.get('/github-callback',
    passport.authenticate('github', {
        failureRedirect: '/failed',
    }),

    function (req, res) {
        res.redirect('/success-github')
    }
);

app.get("/logout", (req, res) => {
    req.session = null;
    req.logout();
    res.redirect('/');
})

app.listen(port, () => console.log("server running on port: " + port))