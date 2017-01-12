<?php
class TestLogin extends PHPUnit_Extensions_Selenium2TestCase {
	public function setUp()
	{
		$this->setHost('localhost');
		$this->setPort(4444);
		$this->setBrowser('firefox');
		$this->setBrowserUrl('http://localhost/seleniumTut');
	}
	public function testHasLoginForm()
	{
		$this->url('index.php');
		$username = $this->byName('username');
		$password = $this->byName('password');
		$this->assertEquals('', $username->value());
		$this->assertEquals('', $password->value());
	}
	public function testLoginFormSubmitsToAdmin()
	{
		$this->url('index.php');
		$form = $this->byCssSelector('form');
		$action = $form->attribute('action');
		$this->assertContains('admin.php', $action);
		$this->byName('username')->value('susan');
		$this->byName('password')->value('1234');
		$form->submit();
		$welcome = $this->byCssSelector('h1')->text();
		$this->assertRegExp('/susan/i', $welcome);
	}
	public function testSubmitButtonIsDisabledUntilFieldsAreFilled()
	{
		$this->url('index.php');
		$username = $this->byName('username');
		$password = $this->byName('password');
		$submit = $this->byId('submit');
		$this->assertFalse($submit->enabled());
		$username->value('susan');
		$password->value('1234');
		$this->assertTrue($submit->enabled());
		$username->clear();
		$password->clear();
		$username->value(' '); // force keyup event
		$this->assertFalse($submit->enabled());
	}
	public function testOffersSignUpAndForgotPasswordLinks()
	{
		$this->url('index.php');
		$this->assertRegExp('/sign ?up/i', $this->source());
		$this->assertRegExp('/forgot password/i', $this->source());
	}
}
