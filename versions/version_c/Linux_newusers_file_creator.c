/* 	Linux Newusers File Creator: creates a file needed to batch add users with Linux "newusers" command.               
 *	Each line in output file holds data for 1 user.                                                                    
 *	Author: Rex Djere.                                                                                                 
 *	2018-Present, Rex Djere.                                                                                         
 *	License: GPL version 3 or later.                                                                                   
 *	Requirements: C11 or later.                                                                                     
 *	Version: Friday 08/17/18 08:11:41 PM                                                                              
 *	Generate version: date '+%A %D %X' 
 */

/* output line format: <Username>:<Password>:<UID>:<GID>:<User Info>:<Home Directory>:<Default Shell> */  

/* library header files */
#include <stdio.h>                                                                       

