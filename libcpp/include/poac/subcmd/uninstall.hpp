//
// Summary: Uninstall packages.
// Options: [<pkg-name>]
//
#ifndef POAC_SUBCMD_UNINSTALL_HPP
#define POAC_SUBCMD_UNINSTALL_HPP

#include <iostream>


namespace poac::subcmd { struct uninstall {
    static const std::string summary() { return "Uninstall packages."; }
    static const std::string options() { return "[<pkg-name>]"; }

    void operator()() { _uninstall(); }

    void _uninstall() {
        // Check if the deps directory exists.
        // Perform dependency resolution.
        // Uninstall packages in serial or parallel to the deps directory.
        //   If there is no package, it displays an error.
    }
};} // end namespace
#endif
