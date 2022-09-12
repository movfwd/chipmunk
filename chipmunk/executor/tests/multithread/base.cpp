#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <dirent.h>
#include <cstring>
#include <errno.h>
#include <pthread.h>
#include <vector>
// #include <attr/xattr.h>

#include "../BaseTestCase.h"
#include "../../user_tools/api/workload.h"
#include "../../user_tools/api/actions.h"

using fs_testing::tests::DataTestResult;
using fs_testing::user_tools::api::WriteData;
using fs_testing::user_tools::api::WriteDataMmap;
using fs_testing::user_tools::api::Checkpoint;
using std::string;
using std::vector;

#define TEST_FILE_PERMS  ((mode_t) (S_IRWXU | S_IRWXG | S_IRWXO))

struct t_args {
	fs_testing::user_tools::api::CmFsOps *cm_;
	string mnt_dir_;
};
intptr_t fail = -1;
int error;

void* run_thread(void* varg) {

    return NULL;
}

namespace fs_testing {
    namespace tests {
        
        
        class testName: public BaseTestCase {
            
            public:
            
            virtual int setup() override {
                
                return 0;
            }
            
            virtual int run( int checkpoint ) override {
                
                return retval;
            }
            
            virtual int check_test( unsigned int last_checkpoint, DataTestResult *test_result) override {
                
                return 0;
            }
                       
            private:
                       
                       
            };
                       
    }  // namespace tests
    }  // namespace fs_testing
                       
   extern "C" fs_testing::tests::BaseTestCase *test_case_get_instance() {
       return new fs_testing::tests::testName;
   }
                       
   extern "C" void test_case_delete_instance(fs_testing::tests::BaseTestCase *tc) {
       delete tc;
   }
