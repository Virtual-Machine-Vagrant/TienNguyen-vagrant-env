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


"@test"["List"] = {
    '1.Click paragraph "ログインID"': function() {
        act.click(":containsExcludeChildren(ID)");
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
    "5.Click <i>": function() {
        var actionTarget = function() {
            return $("#postLogin").find(".fa.fa-sign-in");
        };
        act.click(actionTarget);
    },
    '6.Click link "【障害報告】test data"': function() {
        act.click(":containsExcludeChildren(test data)");
    },
    '7.Click link "ウィンドウを閉じる"': function() {
        act.click(".button[data-close='on']");
    },
    '8.Click link "【障害報告】test data"': function() {
        act.click(":containsExcludeChildren(test data)");
    },
    '9.Click link "【障害報告】脆弱性診断"': function() {
        var actionTarget = function() {
            return $(".fn-fancybox").eq(1);
        };
        act.click(actionTarget);
    },
    '10.Click link "【障害報告】障害報告テスト１"': function() {
        var actionTarget = function() {
            return $(".fn-fancybox").eq(2);
        };
        act.click(actionTarget);
    },
    '11.Click link "編集"': function() {
        var actionTarget = function() {
            return $("#fancybox-content").find(".button").eq(1);
        };
        act.click(actionTarget);
    },
    "12.Drag div": function() {
        act.drag("#contents", 231, -9, {
            offsetX: 517,
            offsetY: 48
        });
    },
    '13.Click link "戻る"': function() {
        var actionTarget = function() {
            return $(".button.is-medium").eq(0);
        };
        act.click(actionTarget);
    },
    '14.Click select "perPage"': function() {
        act.click("#perPage");
    },
    '15.Click option "100"': function() {
        var actionTarget = function() {
            return $("#perPage").find(":containsExcludeChildren(100)");
        };
        act.click(actionTarget);
    },
    '16.Click table cell "2016/11/10"': function() {
        var actionTarget = function() {
            return $(":containsExcludeChildren(20161110)").eq(0);
        };
        act.click(actionTarget);
    },
    '17.Click link "【障害報告】test data"': function() {
        act.click(":containsExcludeChildren(test data)");
    },
    '18.Click link "ウィンドウを閉じる"': function() {
        act.click(".button[data-close='on']");
    },
    '19.Click table cell "<a href..."': function() {
        var actionTarget = function() {
            return $(".c-table").find(" > tbody:nth(0) > tr:nth(8) > td:nth(2)");
        };
        act.click(actionTarget);
    }
};

"@test"["Delete item"] = {
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
    '5.Click table cell "data test"': function() {
        act.click(":containsExcludeChildren(data test)");
    },
    '6.Click link "【障害報告】test data"': function() {
        act.click(":containsExcludeChildren(test data)");
    },
    '7.Click link "削除"': function() {
        handleAlert();
        handleConfirm(true);
        act.click(".button.is-danger[data-form='destroy'][data-confirm='お知らせ・障害報告を削除します。よろしいですか？']");
    }
};

