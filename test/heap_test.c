#include "../lib_cspec/cspec.h"
#include "../heap/heap.c"

context (heaptest) {

    describe("testear creación y uso del heap") {

    	it("creación del heap y pedido de memoria de todo el mismo"){

    	}end

        it("true debería ser igual a true") {
            should_bool(true) be equal to(true);
        } end

        it("true no debería ser igual a false") {
            should_bool(true) be equal to(false);
        } end

        it("este test va a fallar porque 10 no es igual a 11") {
            should_int(10) be equal to(11);
        } end

        skip("este test deberia fallar porque \"Hola\" no es \"Chau\"") {
            should_string("Hola") be equal to("Chau");
        } end

    } end

}
