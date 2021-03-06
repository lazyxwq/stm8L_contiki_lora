/*
************************************************************************************************
* Filename   	: DebugPort.h
* Programmer : JiangJun
* Description	: Debug port by USARTx 
* Date           : 2015-01-14
************************************************************************************************
*/

#ifndef __DEBUG_PORT_H__
#define __DEBUG_PORT_H__


/*
*********************************************************************************************************
*                                                                          INCLUDE FILES
*********************************************************************************************************
*/
#include "Util.h"


/*
*********************************************************************************************************
*                                                                          DEBUG SYSTEM
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                       MACROS & CONSTANTS
*********************************************************************************************************
*/
/* EXPLAIN: switch USARTx for Debug Port as
    USART1    #define DP_PORT_IS_USART1 in "DebugPort.h"
    USART2    #define DP_PORT_IS_USART2 in "DebugPort.h"
    USART3    #define DP_PORT_IS_USART3 in "DebugPort.h" */
#define DP_PORT_IS_USART2


/*
*********************************************************************************************************
*                                            				     DEFINITIONS / TYPEDEFS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                        FUNCTION PROTOTYPE
*********************************************************************************************************
*/
extern void dp_Init(void);
extern INT8S dp_Tx(const void *p_vSrcBuf, INT16S nLen);
extern INT8U dp_GetCmd(void *p_vSaveBuf, INT8U lLen);
extern void dp_RxIRQHandler(void);
extern void dp_DMATxIRQHandler(void);


#endif /* __DEBUG_PORT_H__ */

