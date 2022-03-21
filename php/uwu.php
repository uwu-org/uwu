<?php

function uwu($text): string|array {
	return str_replace(['l', 'r'] , 'w', $text);
}
