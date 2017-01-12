"@fixture login";
"@page https://local-developer-freegames.dmm.com/";

"@test"["login"] = {
    '1.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '2.Type in input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.type(actionTarget, "vytien");
    },
    '3.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '4.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "11111111");
    },
    '5.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '6.Dblclick input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.dblclick(actionTarget, {
            caretPos: 0
        });
    },
    '7.Type in input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.type(actionTarget, "v", {
            caretPos: 0
        });
    },
    '8.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "111");
    },
    '9.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '10.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "11111111");
    },
    '11.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '12.Click link "ログアウト"': function() {
        act.click(".button");
    }
};

