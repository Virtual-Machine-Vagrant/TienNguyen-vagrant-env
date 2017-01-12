<?php

/* Run: vendor/bin/phpunit TestGoogle.php */

class TestGoogle extends PHPUnit_Framework_TestCase {

    protected $url = 'http://google.com';
    /**
     * @var RemoteWebDriver
     */
    protected $webDriver;

    public function setUp()
    {
        $capabilities = array(WebDriverCapabilityType::BROWSER_NAME => 'firefox');
        $this->webDriver = RemoteWebDriver::create('http://localhost:4444/wd/hub', $capabilities);
    }

    public function tearDown()
    {
        if($this->webDriver){
            $this->webDriver->close();
        }
    }

    public function testSearch()
    {
        $this->webDriver->get($this->url);

        // find search field by its name
        $search = $this->webDriver->findElement(WebDriverBy::name('q'));
        $search->click();

        // typing our search query
        $this->webDriver->getKeyboard()->sendKeys('what is composer');

        // submit our query
        $search->submit();
    }

}
?>
