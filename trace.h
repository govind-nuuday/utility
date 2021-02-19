#ifndef _TRACE_H_
#define _TRACE_H_

#define MARKER		"[TE] "
#define ENT_TAG		">>> Entering "
#define EXT_TAG		"<<< Exiting "
#define NL_TAG		std::endl
#define VAL_TAG(x)	"Value of " #x " is: "

#define NL_PRN      std::cout << NL_TAG;
#define POS_PRN		std::cout << "At " << __FILE__ << " [" << __LINE__ << "] " <<  __FUNCTION__ << "() ";

#define LOC_PRN     std::cout << MARKER; POS_PRN; NL_PRN;
#define ENT_PRN     std::cout << MARKER << ENT_TAG ; POS_PRN; NL_PRN;
#define EXT_PRN     std::cout << MARKER << EXT_TAG ; POS_PRN; NL_PRN;
#define VAL_PRN(x)  std::cout << MARKER; POS_PRN; std::cout << VAL_TAG(x) << (x) << NL_TAG;
#define MSG_PRN(x)	std::cout << MARKER; POS_PRN; std::cout << (x) << NL_TAG;

#endif

