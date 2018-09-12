#ifndef FTD_DECLARE_H
#define FTD_DECLARE_H

#include <memory>

#define DECLARE_PTR(X) typedef std::shared_ptr<X> X##Ptr; /**< define smart ptr */

#endif