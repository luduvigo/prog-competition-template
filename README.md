prog-competition-template
=========================

Template of source code that can be used as a baseline for programming competitions or 
algorithm questions solutions. 

--------------------------------

Some considerations about speed:

getchar_unlocked > getchar > scanf > cin

the problem is that getchar_unlocked is thread unsafe, so it must be used only in rare cases in which very fast IO is needed and thread unsafeness is not creating issues
