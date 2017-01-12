<!doctype html>
<html>
<head>
	<title></title>
</head>
<body>
	<form action="admin.php">
		<input type="text" name="username" id="username">
		<input type="text" name="password" id="password">
		<input type="submit" value="Login" id="submit">

		<a href="">Sign Up!</a>
		<a href="">Forgot Password?</a>
	</form>

	<script src="http://code.jquery.com/jquery.js"></script>
	<script>
	(function() {
		var username = $('#username');
		var password = $('#password');
		var submit = $('#submit').attr('disabled', 'disabled');
		$('input').on('keyup', function() {
			var notEmpty = username.val() && password.val();
			notEmpty
				? submit.removeAttr('disabled')
				: submit.attr('disabled', 'disabled');
		});
	})();
	</script>
</body>
</html>
