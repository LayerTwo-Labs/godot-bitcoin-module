/* register_types.cpp */

#include "register_types.h"
#include "core/object/class_db.h"
#include "bitcoin.h"

void initialize_bitcoin_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
    ClassDB::register_class<BitcoinWallet>();
    print_line("Bitcoin module initialized");
}

void uninitialize_bitcoin_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
}