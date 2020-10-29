
//---------------------------------------------------------
// Written by Bryce Summers on October 28th, 2020
// ITP - 132, Assignment 2.1, Stream Processing Functions.
// Last Updated on October 29, 2020
//---------------------------------------------------------
//
// Purpose: This assignment involves 12 cleanly defined
//          functions. By doing this assignment, you should
//          develop more of the skills needed to make
//          progress on Assignment 2 and beyond.
//
// Task: Implement as many of these functions as you can.
//       YOUR code is at the TOP of this file this time.
//
//       (Check the 'lighthouse' section of the course
//        website for more concrete expectations, including
//        whether you may skip some of the problems.)
//
// Hints:
// - The isABC function is the easiest, start there.
// - You should probably implement the isThereAStringLikeThis
//   function last.
// - I'd recommend implementing these functions in the order
//   they appear in this document.
// - In lower functions, you may wish to call and make use
//   of the functions you've already implemented.


//----------------------------------
// --> Start (TOP) of program. <---
//----------------------------------

// Note: Use C++ 11 or later.
#include <iostream> // Input / Output Streams
#include <string>
#include <sstream>


using namespace std;


// ------------------------------------
// Functions that you should implement!
// ------------------------------------
// These functions are in order of
// (easiest / smallest) at TOP to (hardest / largest) at BOTTOM
// You may want to call these smaller functions
// from within the larger later functions. ex. if(isABC(c))
// --------------------------------------------------------
// Note: To help you check your work for correctness, an
//       AUTO-TESTER is included beyond your last function.
//---------------------------------------------------------


// OUT: returns true if c is 'a' or 'b' or 'c'. (They must be lowercase.)
//      returns false otherwise, (including 'A', 'B', and 'C')
bool isABC(char c)
{
    return false;
}


// OUT: true if and only if the first char in the stream is 'a', 'b' or 'c'
// Note: If there is no first character, return false.
bool checkFirstCharABC(istream & in)
{
    return false;
}


// OUT: true if and only if the 3rd char exists and is 'a', 'b', or 'c'
bool checkThirdCharABC(istream & in)
{
    return false;
}


// Returns a string contains the 3 first characters read from the input stream.
// If the input stream contains less than 3 characters, just return the characters it does have.
// IN: "" --> OUT: ""
// IN: "X" --> OUT: "X"
// IN: "To" --> OUT: "To"
// IN: "Win" --> OUT: "Win"
// IN: "wIN" --> OUT: "wIN"
// IN: "Hello World" --> OUT: "Hel"
// IN: "Cats in hats" --> OUT: "Cat"
string echo3(istream & in)
{
    return "IMPLEMENT ME!";
}


// Return a string that contains exactly the contents of the input stream.
string echoAll(istream & in)
{
    return "IMPLEMENT ME!";
}


// Return that contains exactly the same contents as the input stream,
// but all capital letters are converted to lowercase.
// Example: "The Quick BrOwn Fox" --> "the quick brown fox"
string lowercase(string str)
{
    return "IMPLEMENT ME!";
}


// Return the contents of the istream as a string,
// treat all '\t' tab characters to spaces.
// but convert all repeated spaces to just one
//
// Examples
// IN: "    The   Cat   " --> " The Cat "
// IN: "The   Cat"    --> "The Cat" // Notice that there is no space at beginning or end.
// IN: "Go dog go!" --> "Go dog go!" // No change.
// IN: "skip\tto\tmy\tclass" --> "skip to my class"
// IN: "I\t \t \t\t  \t   \t am!" --> "I am!"
string removeExtraSpaces(string str)
{
    return "IMPLEMENT ME!";
}


// -- Linear Search --
// OUT: true if and only if an 'a', 'b', or 'c' is
//      found somewhere in the stream.
bool isThereAnABC(istream & in)
{
    return false;
}


// Return the position of the first 'a', 'b', or 'c'
// character relative to the first character.
// Example: "A cat", the 'c' is the first desired char and it is at position 2.
// Example: "In that we can rely", 'a' is the first char and is at position 5.
// Return -1 if none of those characters is found.
// (In other words is isTherAnABC(in) would return false.)
int whereIsTheFirstABC(istream & in)
{
    return -2;
}


// Return the position of the second 'a', 'b', or 'c'
// character relative to the first character.
// Example: "A cat", the 'a' is the second target char and it is at position 3.
// Example: "In that we can rely", 'c' is the second target char and is at position 11.
// Return -1 if less than 2 of these characters are found.
// Example: "Bat" --> -1, 'a' is first target char, but there is no second char.
int whereIsTheSecondABC(istream & in)
{
    return -2;
}


// Return the starting position of where the exact target string is found
// as a substring of the input data.
// Special case: return 0 if target is the empty string ""
// IN: "The cat in the hat", "cat" --> "cat" is found at position 4
// IN: "The cat in the hat", "he cat in th" --> Its found at position 1
// IN: "The cat in the hat", "n t" --> "n t" is found at position 9
// IN: "The cat in the hat", "hat " --> "hat " is not found, so -1 is returned.
// IN: "The cat in the hat", " The" --> " The" is not found, so -1 is returned.
// IN: "The cat in the hat", "Cat" --> "Cat" is not found, so -1 is returned.
// IN: "The cat in the hat", "in  the" --> Its not found, so -1 is returned.
// Return -1 if the target string is not found.
int whereIsThisString(istream & in, string target)
{
    return -2;
}


// Return true if and only if the input stream contains the target string.
// But, ignore capitalization and extra spaces in both the input and the target.
//
// - (Look at / use your echoAll function)
// - (Look at / use your removeExtraSpaces function)
// - (Look at your lowercase function)
//
// Special case: Return true if the target string is true.
// Return false if the target string is not found.
//
// IN: "The cat in the hat", "cat" --> true
// IN: "The cat in the hat", "the cat in th" --> true
// IN: "The cat in the hat", "hat " --> false
// IN: "The cat in the hat", "Cat" --> true
// IN: "The cat in the hat", "in  the" --> true
// IN: "The cat in the hat", "Dog" --> false.
// IN: "THE CAT IN ThE HAT", "cat in tHe" --> true.
// IN: "THE CAT IN ThE HAT", " the" --> true.
// IN: "THE CAT IN ThE HAT", " the c" --> false.
// IN: "THE CAT IN ThE HAT", "thecatinthehat" --> false.
// IN: "THECAT IN ThE HAT", "the cat in thehat" --> false.

bool isThereAStringLikeThis(istream & in, string target)
{
    return false;
}

// --- BOTTOM of your WORK. Don't edit below this line. ---


// ----------------------------------------------------------
// --------- AUTO TESTER (and its helper functions) ---------
// ----------------------------------------------------------

void ASSERT(bool tautology, string error_message, stringstream & log)
{
    if(!tautology)
    {
        log << "ASSERTION FAILED: " << error_message << endl;
    }
}

void rewindStream(istream & input_stream)
{
    // If this isn't done, it will think something is wrong and won't
    // allow more reading, even after being set back to the beginning.
    input_stream.clear(std::istream::goodbit);

    // Set input iterator to beginning of stream + 0 offset.
    input_stream.seekg (0, input_stream.beg);
}

// Returns a reference so that this function can be used inline
// in assertion statements.
istream & in(string str, stringstream & stream)
{
    stream.str(str);
    rewindStream(stream);
    return stream;
}

void printErrorLog(stringstream & log)
{
    string all_errors = log.str();
    cout << all_errors;

    if(all_errors.length() > 0)
    {
        cout << "Done Auto-testing." << endl;
    }
    else
    {
        cout << "You PASSED all of the tests!" << endl;
    }
}

void auto_tester()
{
    stringstream log;
    stringstream ss; // Temp string stream used to store test input streams.

    ASSERT(false == isABC(' '), "isABC 1", log);
    ASSERT(false == isABC('d'), "isABC 2", log);
    ASSERT(false == isABC('A'), "isABC 3", log);
    ASSERT(false == isABC('B'), "isABC 4", log);
    ASSERT(false == isABC('C'), "isABC 5", log);
    ASSERT(false == isABC('\t'),"isABC 6", log); // etc. Lots of false values possible.
    ASSERT(true == isABC('a'),  "isABC 7", log);
    ASSERT(true == isABC('b'),  "isABC 8", log);
    ASSERT(true == isABC('c'),  "isABC 9", log);

    ASSERT(false == checkFirstCharABC(in("",   ss)), "checkFirstcharABC 1", log);
    ASSERT(false == checkFirstCharABC(in("dz", ss)), "checkFirstcharABC 2", log);
    ASSERT(false == checkFirstCharABC(in(" a", ss)), "checkFirstcharABC 3", log);
    ASSERT(true  == checkFirstCharABC(in("az", ss)), "checkFirstcharABC 4", log);
    ASSERT(true  == checkFirstCharABC(in("bz", ss)), "checkFirstcharABC 5", log);
    ASSERT(true  == checkFirstCharABC(in("cz", ss)), "checkFirstcharABC 6", log);

    ASSERT(false == checkThirdCharABC(in("",    ss)),  "checkThirdcharABC 1", log);
    ASSERT(false == checkThirdCharABC(in("abd", ss)),  "checkThirdcharABC 2", log);
    ASSERT(false == checkThirdCharABC(in("cc", ss)),   "checkThirdcharABC 3", log);
    ASSERT(false == checkThirdCharABC(in("ab c", ss)), "checkThirdcharABC 4", log);
    ASSERT(true  == checkThirdCharABC(in("aaa", ss)),  "checkThirdcharABC 5", log);
    ASSERT(true  == checkThirdCharABC(in("g_bd", ss)), "checkThirdcharABC 6", log);
    ASSERT(true  == checkThirdCharABC(in("abc", ss)),  "checkThirdcharABC 7", log);

    ASSERT(""       == echo3(in("",           ss)), "echo3, 1", log);
    ASSERT("X"      == echo3(in("X",          ss)), "echo3, 2", log);
    ASSERT("Ma"     == echo3(in("Ma",         ss)), "echo3, 3", log);
    ASSERT("Pap"    == echo3(in("Papa",       ss)), "echo3, 4", log);
    ASSERT("Hoo"    == echo3(in("Hooligan",   ss)), "echo3, 5", log);
    ASSERT("\n\'\t" == echo3(in("\n\'\t g",   ss)), "echo3, 6", log);
    ASSERT("   "    == echo3(in("   The cat", ss)), "echo3, 7", log);

    ASSERT(""           == echoAll(in("",           ss)), "echoAll, 1", log);
    ASSERT("Y"          == echoAll(in("Y",          ss)), "echoAll, 2", log);
    ASSERT("Pa"         == echoAll(in("Pa",         ss)), "echoAll, 3", log);
    ASSERT("Mama"       == echoAll(in("Mama",       ss)), "echoAll, 4", log);
    ASSERT("Upstanding" == echoAll(in("Upstanding", ss)), "echoAll, 5", log);
    ASSERT("\n\'\t g"   == echoAll(in("\n\'\t g",   ss)), "echoAll, 6", log);
    ASSERT("   The dog" == echoAll(in("   The dog", ss)), "echoAll, 7", log);

    ASSERT("" == lowercase(""),                                       "lowercase 1", log);
    ASSERT("the quick brown fox" == lowercase("The Quick BrOwn Fox"), "lowercase 2", log);
    ASSERT("already lowercase" == lowercase("already lowercase"),     "lowercase 3", log);
    ASSERT("abracadabra"  == lowercase("ABRACADABRA"),                "lowercase 4", log);
    ASSERT("!@#$%^&*()" == lowercase("!@#$%^&*()"),                   "lowercase 5", log);

    ASSERT(""                   == removeExtraSpaces(""),                   "removeExtraSpaces 1", log);
    ASSERT(" The Cat "          == removeExtraSpaces("    The   Cat   "),   "removeExtraSpaces 2", log);
    ASSERT("The Cat"            == removeExtraSpaces("The   Cat"),          "removeExtraSpaces 3", log);
    ASSERT("Go dog go!"         == removeExtraSpaces("Go dog go!"),         "removeExtraSpaces 4", log);
    ASSERT("skip to my class"   == removeExtraSpaces("skip\tto\tmy\tclass"), "removeExtraSpaces 5", log);
    ASSERT("I am!"              == removeExtraSpaces("I\t \t \t\t  \t   \t am!"), "removeExtraSpaces 6", log);
    ASSERT("Line 1\nLine 2 \n"  == removeExtraSpaces("Line  1\nLine 2 \n"), "removeExtraSpaces 7", log);


    ASSERT(false  == isThereAnABC(in("",    ss)),            "isThereAnABC 1", log);
    ASSERT(false  == isThereAnABC(in("ABCDEFGHIJKLMN", ss)), "isThereAnABC 2", log);
    ASSERT(false  == isThereAnABC(in("     d   \t\n ", ss)), "isThereAnABC 3", log);
    ASSERT(true   == isThereAnABC(in("a",              ss)), "isThereAnABC 4", log);
    ASSERT(true   == isThereAnABC(in("The cat's hat ", ss)), "isThereAnABC 5", log);
    ASSERT(true   == isThereAnABC(in("             b", ss)), "isThereAnABC 6", log);
    ASSERT(true   == isThereAnABC(in("      C   c   ", ss)), "isThereAnABC 7", log);
    ASSERT(true   == isThereAnABC(in("\n\tACB\n\t\'a", ss)), "isThereAnABC 8", log);


    // (not found.)
    ASSERT(-1 == whereIsTheFirstABC(in("I AM YELLING!", ss)),       "whereIsTheFirstABC 1", log);
    ASSERT(-1 == whereIsTheFirstABC(in("", ss)),                    "whereIsTheFirstABC 2", log);
    ASSERT(-1 == whereIsTheFirstABC(in(" ", ss)),                   "whereIsTheFirstABC 3", log);
    ASSERT(-1 == whereIsTheFirstABC(in("       ", ss)),             "whereIsTheFirstABC 4", log);
    ASSERT(-1 == whereIsTheFirstABC(in("       ", ss)),             "whereIsTheFirstABC 5", log);
    // (found.)
    ASSERT(5 == whereIsTheFirstABC(in("     a  ", ss)),             "whereIsTheFirstABC 6", log);
    ASSERT(2 == whereIsTheFirstABC(in("A cat", ss)),                "whereIsTheFirstABC 7", log);
    ASSERT(4 == whereIsTheFirstABC(in("The cat", ss)),              "whereIsTheFirstABC 8", log);
    ASSERT(1 == whereIsTheFirstABC(in("Abraham", ss)),              "whereIsTheFirstABC 9", log);
    ASSERT(5 == whereIsTheFirstABC(in("In that we can rely", ss)),  "whereIsTheFirstABC 10", log);

    ASSERT(-1 == whereIsTheSecondABC(in("", ss)),                   "whereIsTheSecondABC 1", log);
    ASSERT(-1 == whereIsTheSecondABC(in("a", ss)),                  "whereIsTheSecondABC 2", log);
    ASSERT(-1 == whereIsTheSecondABC(in("Bat", ss)),                "whereIsTheSecondABC 3", log);
    ASSERT(1  == whereIsTheSecondABC(in("bat", ss)),                "whereIsTheSecondABC 4", log);
    ASSERT(3  == whereIsTheSecondABC(in("A cat", ss)),              "whereIsTheSecondABC 5", log);
    ASSERT(11 == whereIsTheSecondABC(in("In that we can rely", ss)),"whereIsTheSecondABC 6", log);


    string phrase = "The cat in the hat";
    ASSERT(-1 == whereIsThisString(in(phrase, ss), "hat "),         "whereIsThisString 2", log);
    ASSERT(-1 == whereIsThisString(in(phrase, ss), "Cat"),          "whereIsThisString 3", log);
    ASSERT(-1 == whereIsThisString(in(phrase, ss), "in  the"),      "whereIsThisString 4", log);
    ASSERT(0  == whereIsThisString(in("", ss), ""),                 "whereIsThisString 1", log);
    ASSERT(1  == whereIsThisString(in(phrase, ss), "he cat in th"), "whereIsThisString 6", log);
    ASSERT(4  == whereIsThisString(in(phrase, ss), "cat"),          "whereIsThisString 5", log);
    ASSERT(9  == whereIsThisString(in(phrase, ss), "n t"),          "whereIsThisString 7", log);


    ASSERT(true  == isThereAStringLikeThis(in("", ss), ""),                   "isThereAStringLikeThis 1",  log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase, ss), ""),               "isThereAStringLikeThis 2", log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase, ss), "cat"),            "isThereAStringLikeThis 3", log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase, ss), "Cat"),            "isThereAStringLikeThis 4", log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase, ss), "in  the"),        "isThereAStringLikeThis 5", log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase, ss), "the cat in th"),  "isThereAStringLikeThis 6", log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase, ss), "he cat in th"),   "isThereAStringLikeThis 7", log);

    ASSERT(false == isThereAStringLikeThis(in(phrase, ss), "hat "),           "isThereAStringLikeThis 8", log);
    ASSERT(false == isThereAStringLikeThis(in(phrase, ss), " ThE c"),         "isThereAStringLikeThis 9", log);
    ASSERT(false == isThereAStringLikeThis(in(phrase, ss), "Dog"),            "isThereAStringLikeThis 10", log);
    ASSERT(false == isThereAStringLikeThis(in(phrase, ss), "Dog"),            "isThereAStringLikeThis 11", log);
    ASSERT(false == isThereAStringLikeThis(in("a", ss), "aas"),               "isThereAStringLikeThis 12", log);
    ASSERT(false == isThereAStringLikeThis(in(phrase, ss), "the\nhat"),       "isThereAStringLikeThis 13", log);

    string phrase2 = "THE   CAT In  ThE HAT";
    ASSERT(true  == isThereAStringLikeThis(in(phrase2, ss), "n t"),           "isThereAStringLikeThis 14", log);
    ASSERT(true  == isThereAStringLikeThis(in(phrase2, ss), "cAt    in tHe"), "isThereAStringLikeThis 15", log);

    ASSERT(false == isThereAStringLikeThis(in(phrase2, ss), "thecatinthehat"), "isThereAStringLikeThis 16", log);
    ASSERT(false == isThereAStringLikeThis(in("Thecat in", ss), "tHe CATIN"),  "isThereAStringLikeThis 17", log);

    // Tell the user which assertions failed if any.
    printErrorLog(log);
}

int main ()
{
    auto_tester();
}
