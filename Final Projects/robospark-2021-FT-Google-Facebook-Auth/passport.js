const passport = require("passport")
const GoogleStrategy = require('passport-google-oauth2').Strategy;
const FacebookStrategy = require('passport-facebook').Strategy;
const GitHubStrategy = require('passport-github2').Strategy;

const { googleID, googleSecret, fbID, fbSecret, githubID, githubSecret } = require("./secrets.json");

passport.serializeUser(function (user, done) {
    done(null, user);
});

passport.deserializeUser(function (user, done) {
    done(null, user);
});

passport.use(new GoogleStrategy({
    clientID: googleID,
    clientSecret: googleSecret,
    callbackURL: "/google-callback/",
    passReqToCallback: true
},
    function (request, accessToken, refreshToken, profile, done) {
        return done(null, profile);
    }
));

passport.use(new FacebookStrategy({
    clientID: fbID,
    clientSecret: fbSecret,
    profileFields: ['displayName', 'photos'],
    callbackURL: "/fb-callback/"
},
    function (accessToken, refreshToken, profile, done) {
        return done(null, profile);
    }
));

passport.use(new GitHubStrategy({
    clientID: githubID,
    clientSecret: githubSecret,
    // profileFields: [ 'photos'],
    callbackURL: "/github-callback/"
},
    function (accessToken, refreshToken, profile, done) {
        return done(null, profile);
    }
));
