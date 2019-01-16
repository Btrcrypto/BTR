// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The Bitcoin Rich Developers
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
	
 "\n   	//   ______  __________________ _______  _______ _________ _          _______ _________ _______          \n"
	"	//  (  ___ \ \__   __/\__   __/(  ____ \(  ___  )\__   __/( (    /|  (  ____ )\__   __/(  ____ \|\     /|\n"
	"	//  | (   ) )   ) (      ) (   | (    \/| (   ) |   ) (   |  \  ( |  | (    )|   ) (   | (    \/| )   ( |\n"
	   "//  | (__/ /    | |      | |   | |      | |   | |   | |   |   \ | |  | (____)|   | |   | |      | (___) |\n"
	   "//  |  __ (     | |      | |   | |      | |   | |   | |   | (\ \) |  |     __)   | |   | |      |  ___  |\n"
	"	//  | (  \ \    | |      | |   | |      | |   | |   | |   | | \   |  | (\ (      | |   | |      | (   ) |\n"
	"	//  | )___) )___) (___   | |   | (____/\| (___) |___) (___| )  \  |  | ) \ \_____) (___| (____/\| )   ( |\n"
	"	//  |/ \___/ \_______/   )_(   (_______/(_______)\_______/|/    )_)  |/   \__/\_______/(_______/|/     \|\n";
                                                                                                       



const std::string nonWindowsAsciiArt = 

                                                                                                 
	"\n	  ██████╗ ██╗████████╗ ██████╗ ██████╗ ██╗███╗   ██╗    ██████╗ ██╗ ██████╗██╗  ██╗   \n"
		 "██╔══██╗██║╚══██╔══╝██╔════╝██╔═══██╗██║████╗  ██║    ██╔══██╗██║██╔════╝██║  ██║\n"
		 "██████╔╝██║   ██║   ██║     ██║   ██║██║██╔██╗ ██║    ██████╔╝██║██║     ███████║\n"
		 "██╔══██╗██║   ██║   ██║     ██║   ██║██║██║╚██╗██║    ██╔══██╗██║██║     ██╔══██║\n"
		 "██████╔╝██║   ██║   ╚██████╗╚██████╔╝██║██║ ╚████║    ██║  ██║██║╚██████╗██║  ██║\n"
		 "╚═════╝ ╚═╝   ╚═╝    ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝    ╚═╝  ╚═╝╚═╝ ╚═════╝╚═╝  ╚═╝\n";
		                                                                                   













/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
