#ifndef UTILS_H_
#define UTILS_H_

#include "pwr_tree.h"

#define ASSERT_NODE(_node_, _state_)                                                                                   \
  do {                                                                                                                 \
    if (_state_) {                                                                                                     \
      TEST_ASSERT_MESSAGE((_node_).enabled, "Node " #_node_ " is off but should be on.");                              \
    } else {                                                                                                           \
      TEST_ASSERT_MESSAGE(!(_node_).enabled, "Node " #_node_ " is on but should be off.");                             \
    }                                                                                                                  \
  } while (0)

#define ASSERT_OK(_call_)  TEST_ASSERT_MESSAGE((_call_) == 0, "Call returned unexpected error")
#define ASSERT_ERR(_call_) TEST_ASSERT_MESSAGE((_call_) != 0, "Call returned ok but expected error")

void assert_tree_state_legal(struct pt *pt);

#endif /* UTILS_H_ */
