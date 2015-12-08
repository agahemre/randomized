<?php

/**
 * Checks whether given word is palindrome or not
 * @param $word : array
 */

function is_palindrome ( $word )
{ 
	$j = count ( $word ) - 1;	// start from right to left, why minus 1 remember Zero-Index array in php
	$i = 0;				// start from left to right 

	/**
	 * @desc : this code can be written w/ one loop
         * visiting every character, or recursive style
         * but the key idea is iterating over this string 
         * till left index meets right index since no further
         * action is required.
         * 
         * if given string contains one character,
         * the code bypasses the loop, directly returns true
         *
	 */

	while ( $i < $j )
	{
		if ( $word[$i] == $word[$j] )
		{
			$i++;
			$j--;
                        continue;
		}
                return false;
	}

	return true;

}

function main ( $argv )
{
	if ( count ( $argv ) != 2 )
	{
		echo "Invalid arguments. Usage :: php palindrome_check.php <your-word-be-asked-palindrome>\n";
		exit(1);

	}
        
        $argv[1] .=  ( is_palindrome ( str_split ( $argv[1] ) ) ) ? " is palindrome.\n" : " is NOT palindrome.\n";
        echo $argv[1];
}
// Usage :: php palindrome_check.php <your-word-be-asked-palindrome>
return main ( $argv );
