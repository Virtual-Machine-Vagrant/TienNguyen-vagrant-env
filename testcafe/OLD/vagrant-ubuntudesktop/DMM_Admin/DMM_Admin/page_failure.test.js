"@fixture Page failure";
"@page https://local-admin-freegames.dmm.com/informations/failure/list";

"@test"["Create new"] = {
    '1.Type in input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.type(actionTarget, "admin1");
    },
    '2.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "mtn-admin1");
    },
    '3.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '4.Click link "新規追加"': function() {
        act.click(".button.is-primary");
    },
    '5.Click select "category"': function() {
        act.click("[name='category']");
    },
    '6.Click option "メンテナンス"': function() {
        var actionTarget = function() {
            return $("[name='category']").find(" > option:nth(2)");
        };
        act.click(actionTarget);
    },
    '7.Type in input "title"': function() {
        var actionTarget = function() {
            return $("#createconfirm").find("[name='title']");
        };
        act.type(actionTarget, "test bla bla");
    },
    "8.Press key TAB": function() {
        act.press("tab");
    },
    '9.Type in text area "description"': function() {
        act.type(".w100.mg-b12[name='description'][data-1b082a6cec-focus='true']", "test bla bla");
    },
    "10.Click <i>": function() {
        act.click(".fa.fa-check");
    },
    '11.Click link "確定"': function() {
        act.click(".button.is-success.is-medium[data-form='store']");
    },
    '12.Click link "お知らせ・障害報告の一覧に戻る"': function() {
        var actionTarget = function() {
            return $("#contents").find(".button");
        };
        act.click(actionTarget);
    }
};

