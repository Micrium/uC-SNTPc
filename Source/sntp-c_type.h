/*
*********************************************************************************************************
*                                              uC/SNTPc
*                               Simple Mail Transfer Protocol (client)
*
*                    Copyright 2004-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                             SNTP CLIENT
*
* Filename : sntp-c_type.h
* Version  : V2.01.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This header file is protected from multiple pre-processor inclusion through use of the
*               SNTPc present pre-processor macro definition.
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  SNTPc_TYPE_PRESENT                                     /* See Note #1.                                         */
#define  SNTPc_TYPE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <cpu.h>
#include  <Source/net_type.h>


/*
*********************************************************************************************************
*                                    SNTPc CONFIGURATION DATA TYPE
*********************************************************************************************************
*/

typedef struct sntp_server_cfg {

    CPU_CHAR             *ServerHostnamePtr;
    NET_PORT_NBR          ServerPortNbr;
    NET_IP_ADDR_FAMILY    ServerAddrFamily;
    CPU_INT32U            ReqRxTimeout_ms;

}SNTPc_CFG;


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/
#endif                                                          /* End of lib mem module include.                       */

