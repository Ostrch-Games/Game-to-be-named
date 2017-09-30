# Game-to-be-named

Welcome to the first Ostrich-Games game. This readme needs to be filled in.

To clone and work on this repo do the following:

1. Download [Git](https://git-scm.com/download/win)

2. (Optional) Download [Sourcetree](https://www.sourcetreeapp.com/) this is a gui for the Git workflow
    while it is not necessary I recommend it as its a lot easier than using the command line to clone
	and contribute.

3. Clone the repo, whether by the command line or by adding the repo in sourcetree

4. Download [Visual Studio Community 2017](https://www.visualstudio.com/downloads/) you will need to 
   install VS with some specific settings, select the following:
   Desktop develeopment with C++
   Python Development (Optional)
   Game Development with C++
   Linux Development with C++
   
   Then in individual components add the following:
   Git for windows
   Gihub extension for visual studio
   VC++ 2015.3 v140 toolset for desktop (x86,x64) (Needed for Unreal Engine to work)
  
5. Speaking of [Unreal Engine](https://www.unrealengine.com/download?dismiss=%2F), download that next.

6. Work away, the git workflow and pull requests are used to upload changes back into this repo. You 
   will not be able to push work straight to the master branch so create a branch and then pull request
   it into master once your work on the branch has reached an appropriate point. - If you want to know
   more about the git workflow we will be following talk to Reece.

There may be further steps in the future once I initialise the main game loop and if I sort out using 
cmake to build the visual studio solution. 

The source code is stored in */OstrichOne/Source/OstrichOne, there is a visual studio solution in 
*/OstrichOne, opening this will allow you to see the code (pretty bare bones atm).

I suggest at least at the start if you want to create something new then rather than creating the class
in Visual Studio, create it in the Unreal Editor as you can select some default classes to create. 