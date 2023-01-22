//
// Created by Rufelle on 17/01/2023.
//
#include "compiler_macros.h"
#include "../extern/vectorize.h"
#include "argshandler.h"
#include "compiler.h"
#include "chaintime.h"




int main (int argc, char ** argv){
    {
        Timer timer;
        // scoped namespace
        using namespace chain;
        auto args_vector = vectorize(argc, argv);
        handle(args_vector);
        // compiler("../src/compiler/hello.link");
        std::cout << "<!> Compilation success.\n";
    }


}

#undef func
#undef let