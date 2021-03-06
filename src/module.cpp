#include "main.h"

/* Module constructor */
Module::Module()
{
    // nothing to do here
}

/* Used to initialize option values to empty strings */
void Module::set_opts(vector<string> &_options)
{
    for (vector<string>::iterator it = _options.begin(); it != _options.end(); it++)
        options[*it] = "";
}

/* helper function for padding with spaces */
string pad_string (string s, unsigned int size)
{
    while (s.size() < size)
        s += " ";
    return s;
}

/* display options in a nice table
 * pads option name to MAXOPTNAME
  */
void Module::disp_opts()
{
    map<string,string>::iterator it = options.begin();
    cout << "\t| "<< pad_string("Option", MAXOPTNAME) << "| Value" << endl;
    for (; it != options.end(); it++)
        cout << "\t| " << pad_string(it->first, MAXOPTNAME) << "| " << it->second << endl;
}

/* set a particular option value, doesn't check if it doesn't exist */
void Module::set_opt_value(string opt, string val)
{
    if (options.find(opt) == options.end())
        cout << "[-] Invalid option: " << opt << endl;
    else
        options[opt] = val;
}

/* This function is virtual and should be overwritten */
void Module::disp_desc()
{
    cout << "[-] Description functionality has not been implemented." << endl;
}

/* This function is virtual and should be overwritten */
int Module::run()
{
    cout << "[-] Run functionality has not been implemented." << endl;
    return -1;
}
