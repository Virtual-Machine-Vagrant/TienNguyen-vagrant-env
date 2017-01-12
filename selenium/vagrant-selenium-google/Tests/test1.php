<?php

$lang1 = array('aaaa' => 'tet test' );
$keys = array('thank you','thanks','thank ya');
$lang = array_merge($lang1, array_fill_keys($keys, 'You are welcome'));
var_dump($lang);

/*
use PHPUnit\Framework\TestCase;
class StackTest extends TestCase
{
    public function testPushAndPop()
    {
        $stack = [];
        $this->assertEquals(0, count($stack));
        array_push($stack, 'foo');
        $this->assertEquals('foo', $stack[count($stack)-1]);
        $this->assertEquals(1, count($stack));
        $this->assertEquals('foo', array_pop($stack));
        $this->assertEquals(0, count($stack));
    }
}
*/
?>