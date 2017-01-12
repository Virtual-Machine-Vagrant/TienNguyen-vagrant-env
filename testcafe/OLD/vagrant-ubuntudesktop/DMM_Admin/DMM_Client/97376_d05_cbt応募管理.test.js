"@fixture 97376_D05_CBT応募管理";
"@page https://local-admin-freegames.dmm.com/informations/info/list";

"@test"["D05-01-S01 : CBT応募管理"] = {
    "1.Press key combination SHIFT+": function() {
        act.press("shift+");
    },
    '2.Type in input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.type(actionTarget, "admin1");
    },
    "3.Press key TAB": function() {
        act.press("tab");
    },
    '4.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "mtn-admin1");
    },
    '5.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '6.Click link "新規追加"': function() {
        act.click(".button.is-primary");
    },
    "7.Click <i>": function() {
        act.click(".fa.fa-check");
    },
    '8.Type in input "title"': function() {
        var actionTarget = function() {
            return $("#createconfirm").find("[name='title']");
        };
        act.type(actionTarget, "test");
    },
    '9.Type in text area "description"': function() {
        act.type(".w100.mg-b12[name='description']", "test data");
    },
    '10.Click link "確認"': function() {
        act.click(".button.is-warning.is-medium[data-form='createconfirm']");
    },
    "11.Click <i>": function() {
        act.click(".fa.fa-circle-o");
    },
    '12.Click link "お知らせ・障害報告の一覧に戻る"': function() {
        var actionTarget = function() {
            return $("#contents").find(".button");
        };
        act.click(actionTarget);
    }
};

"@test"["D05-03-S01 : CBT応募アカウントCSVアップロード"] = {
    '1.Type in input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.type(actionTarget, "admin1");
    },
    "2.Press key TAB": function() {
        act.press("tab");
    },
    '3.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "mtn-admin1");
    },
    '4.Click link "ログイン"': function() {
        act.click(".button.is-primary.is-large[data-form='postLogin']");
    },
    '5.Click link "【お知らせ】test"': function() {
        var actionTarget = function() {
            return $(".fn-fancybox").eq(0);
        };
        act.click(actionTarget);
    },
    '6.Click link "編集"': function() {
        var actionTarget = function() {
            return $("#fancybox-content").find(".button").eq(1);
        };
        act.click(actionTarget);
    },
    '7.Type in text area "description"': function() {
        act.type(":containsExcludeChildren(test data)", " sample aaa");
    },
    "8.Press key BACKSPACE": function() {
        act.press("backspace");
    },
    "9.Press key BACKSPACE": function() {
        act.press("backspace");
    },
    "10.Press key BACKSPACE": function() {
        act.press("backspace");
    },
    '11.Type in text area "description"': function() {
        act.type(":containsExcludeChildren(test data)", "bla bla");
    },
    '12.Type in input "title"': function() {
        var actionTarget = function() {
            return $("#editconfirm").find("[name='title']");
        };
        act.type(actionTarget, " bla bla");
    },
    '13.Click link "確認"': function() {
        act.click(".button.is-warning.is-medium[data-form='editconfirm']");
    },
    '14.Click link "確定"': function() {
        act.click(".button.is-success.is-medium[data-form='update']");
    },
    '15.Click link "お知らせ・障害報告の一覧に戻る"': function() {
        var actionTarget = function() {
            return $("#contents").find(".button");
        };
        act.click(actionTarget);
    }
};

"@test"["D05-06-R01 : CBT応募アカウント一覧CSV出力Format"] = {
    '1.Type in input "login_id"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='login_id']");
        };
        act.type(actionTarget, "admin1");
    },
    "2.Press key TAB": function() {
        act.press("tab");
    },
    '3.Type in password input "password"': function() {
        var actionTarget = function() {
            return $("#postLogin").find("[name='password']");
        };
        act.type(actionTarget, "mtn-admin1");
    },
    "4.Click <i>": function() {
        var actionTarget = function() {
            return $("#postLogin").find(".fa.fa-sign-in");
        };
        act.click(actionTarget);
    },
    '5.Click link "【お知らせ】test"': function() {
        act.click(":containsExcludeChildren(test bla bla)");
    },
    "6.Click <i>": function() {
        handleAlert();
        handleConfirm(true);
        act.click(".fa.fa-trash-o");
    }
};