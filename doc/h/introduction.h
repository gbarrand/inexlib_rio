/**

@page inexlib_rio_introduction Introduction

  inexlib_rio is a collection of inlib/exlib examples related to our inlib writer/reader C++ implementation
 of the CERN-ROOT file format:
@verbatim
    wroot.cpp       # to produces a wroot.root file with histos and flat ntuples in it.
    rroot.cpp       # to read back histos and the ntuples in the wroot.root file.
    wroot_tree.cpp  # to write a TTree like structure in a wroot_tree.root file.
    root_ls.cpp     # to see the "keys" in a .root file.
@endverbatim
 
 There are also .C scripts to read the files from the CERN-ROOT program:
@verbatim
    read_wroot_root.C
    root read_wroot_tree_root.C
@endverbatim

  Someone sensitive to software engineering may appreciate the difference in number of lines of
 code to embarque between inlib/[wroot,rroot] (around 20 kloc) and CERN-ROOT (around 500 kloc) in
 order to write/read an histogram in a file.

  See the README on github for instructions on how to build, install and run.

*/

