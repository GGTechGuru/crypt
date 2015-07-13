#include <stdio.h>

int main( char argv[][] ) {
	// Get calling name: line_encr / line_decr
	printf("Do it!\n");
	//
	// Get script file name
	//
	// Verify script file exists
	//
	// Open script file
	//
	
	// If to be encrypted
	    // Get password
	    // Get output file name
	    // Open the output file
	    // Read input script
	        // For each line in the input script
		    // Encrypt the line
		    // Decrypt the line
		    // Verify they match
		    // If they don't match, throw an errror and exit

		    // Print the encrypted line to the output file
		    // Close the output file
		    // Print a success message
		    // Close the input file
		    //

	// If to be decrypted
	    // Get password
	    // Get input encrypted script path
	    // Open the encrypted script

	    // Create a new temporary script file

	    // Read the encrypted script line by line
	    // For each encrypted line
	        // Decrypt the line
		// Write the decrypted line to the temporary file

	    // Close both files
	    // Set the decrypted temporary script file to be executable
	    
	    // Fork off a new process to execute the file
	        // In the forked process
		    // Build the argument list from the remainder of				    // the arguments (unused ones.)
		    // If any shell specified, invoke that with the script
		    // as an argument

	    // In the main process
	        // remove the temporary file
		// wait for the child process to complete

char * encr_str( char * in_str /* , char * password */ ) {
}

char * decr_str( char * in_str /* , char * password */ ) {
}

short exec_and_del( const char * in_mem_file ) {
}
