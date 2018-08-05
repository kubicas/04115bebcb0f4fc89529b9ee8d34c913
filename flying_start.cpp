#include "repo/repo.h"

int main(int argc, char const* argv[])
{
    repo::flying_start(
        std::vector<repo::repository_t>
    { {
        /*******************************************************************************************************************************************
        * Edit the constants below to create a 'flying_start' for your project.                                                                    *
        * Don't forget to change the target name accordingly                                                                                       *
        *  local,                             remote,                            host_type,               host,               subdir               */
        { "share000",                        "7594fed3a30c4c7b87eb614d30e71cf9", repo::archive_host_type, repo::archive_host, repo::archive_subdir },
        { "copy_touched_files",              "c623d50ade32453f9c5c1808d47ade11", repo::archive_host_type, repo::archive_host, repo::archive_subdir }
        /*******************************************************************************************************************************************/
    } },
    argc, argv);
}