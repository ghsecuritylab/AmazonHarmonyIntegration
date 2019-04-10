/*****************************************************************************/
/* startup_XMC4300.s: Startup file for XMC4300 device series for EWARM       */
/*****************************************************************************/
/**
* @file     startup_XMC4300.s
*           XMC4300 Device Series
* @version  V1.0
* @date     19. November 2015
*
*********************************************************************************************************************
* Copyright (c) 2015-2016, Infineon Technologies AG
* All rights reserved.                        
*                                             
* Redistribution and use in source and binary forms, with or without modification,are permitted provided that the 
* following conditions are met:   
*                                                                              
* Redistributions of source code must retain the above copyright notice, this list of conditions and the following 
* disclaimer.                        
* 
* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following 
* disclaimer in the documentation and/or other materials provided with the distribution.                       
* 
* Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote 
* products derived from this software without specific prior written permission.                                           
*                                                                              
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE  
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR  
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
* WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                                                  
*                                                                              
* To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes with 
* Infineon Technologies AG dave@infineon.com).                                                          
*********************************************************************************************************************
*
******************************************************************************/
/* ********************* Version History *********************************** */
/* ***************************************************************************
V1.0, 19 November 2015, Initial version
**************************************************************************** */

        MODULE  ?vector_table

        AAPCS INTERWORK, VFP_COMPATIBLE, RWPI_COMPATIBLE
        PRESERVE8


        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

        SECTION .intvec:CODE:NOROOT(2)

        EXTERN  __iar_program_start
        EXTERN  SystemInit  
        PUBLIC  __vector_table
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA

__iar_init$$done:               ; The vector table is not needed
                                ; until after copy initialization is done

;/* ===========START : MACRO DEFINITION MACRO DEFINITION ================== */
;/*
; * STEP_AB and below have the prefetch functional deviation (Errata id: PMU_CM.001).
; * A veneer defined below will first be executed which in turn branches to the final 
; * exception handler.
; *
; * In addition to defining the veneers, the vector table must for these buggy
; * devices contain the veneers.
; */

;/* A macro to setup a vector table entry */
ExcpVector  macro
            DCD \1
            endm           

;/* A macro to ease definition of the various handlers */
ProxyHandler  macro
              PUBWEAK \1
              SECTION .text:CODE:REORDER:NOROOT(1)
\1
              B \1
              endm

;/* ============= END OF MACRO DEFINITION MACRO DEFINITION ================== */

__vector_table
        DCD     sfe(CSTACK)
        DCD     Reset_Handler

        ExcpVector     NMI_Handler
        ExcpVector     HardFault_Handler
        ExcpVector     MemManage_Handler
        ExcpVector     BusFault_Handler
        ExcpVector     UsageFault_Handler
        DCD     0
        DCD     0
        DCD     0
        DCD     0
        ExcpVector     SVC_Handler
        ExcpVector     DebugMon_Handler
        DCD     0
        ExcpVector     PendSV_Handler
        ExcpVector     SysTick_Handler

    ; Interrupt Handlers for Service Requests (SR) from XMC4300 Peripherals
	ExcpVector   SCU_0_IRQHandler            ; Handler name for SR SCU_0
	ExcpVector   ERU0_0_IRQHandler           ; Handler name for SR ERU0_0
	ExcpVector   ERU0_1_IRQHandler           ; Handler name for SR ERU0_1
	ExcpVector   ERU0_2_IRQHandler           ; Handler name for SR ERU0_2
	ExcpVector   ERU0_3_IRQHandler           ; Handler name for SR ERU0_3
	ExcpVector   ERU1_0_IRQHandler           ; Handler name for SR ERU1_0
	ExcpVector   ERU1_1_IRQHandler           ; Handler name for SR ERU1_1
	ExcpVector   ERU1_2_IRQHandler           ; Handler name for SR ERU1_2
	ExcpVector   ERU1_3_IRQHandler           ; Handler name for SR ERU1_3
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	ExcpVector   PMU0_0_IRQHandler           ; Handler name for SR PMU0_0
	DCD   0                           ; Handler name for SR PMU0_1
	ExcpVector   VADC0_C0_0_IRQHandler       ; Handler name for SR VADC0_C0_0
	ExcpVector   VADC0_C0_1_IRQHandler       ; Handler name for SR VADC0_C0_1
	ExcpVector   VADC0_C0_2_IRQHandler       ; Handler name for SR VADC0_C0_1
	ExcpVector   VADC0_C0_3_IRQHandler       ; Handler name for SR VADC0_C0_3
	ExcpVector   VADC0_G0_0_IRQHandler       ; Handler name for SR VADC0_G0_0
	ExcpVector   VADC0_G0_1_IRQHandler       ; Handler name for SR VADC0_G0_1
	ExcpVector   VADC0_G0_2_IRQHandler       ; Handler name for SR VADC0_G0_2
	ExcpVector   VADC0_G0_3_IRQHandler       ; Handler name for SR VADC0_G0_3
	ExcpVector   VADC0_G1_0_IRQHandler       ; Handler name for SR VADC0_G1_0
	ExcpVector   VADC0_G1_1_IRQHandler       ; Handler name for SR VADC0_G1_1
	ExcpVector   VADC0_G1_2_IRQHandler       ; Handler name for SR VADC0_G1_2
	ExcpVector   VADC0_G1_3_IRQHandler       ; Handler name for SR VADC0_G1_3
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	ExcpVector   DAC0_0_IRQHandler           ; Handler name for SR DAC0_0
	ExcpVector   DAC0_1_IRQHandler           ; Handler name for SR DAC0_0
	ExcpVector   CCU40_0_IRQHandler          ; Handler name for SR CCU40_0
	ExcpVector   CCU40_1_IRQHandler          ; Handler name for SR CCU40_1
	ExcpVector   CCU40_2_IRQHandler          ; Handler name for SR CCU40_2
	ExcpVector   CCU40_3_IRQHandler          ; Handler name for SR CCU40_3
	ExcpVector   CCU41_0_IRQHandler          ; Handler name for SR CCU41_0
	ExcpVector   CCU41_1_IRQHandler          ; Handler name for SR CCU41_1
	ExcpVector   CCU41_2_IRQHandler          ; Handler name for SR CCU41_2
	ExcpVector   CCU41_3_IRQHandler          ; Handler name for SR CCU41_3
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	ExcpVector   CCU80_0_IRQHandler          ; Handler name for SR CCU80_0
	ExcpVector   CCU80_1_IRQHandler          ; Handler name for SR CCU80_1
	ExcpVector   CCU80_2_IRQHandler          ; Handler name for SR CCU80_2
	ExcpVector   CCU80_3_IRQHandler          ; Handler name for SR CCU80_3
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	ExcpVector   CAN0_0_IRQHandler           ; Handler name for SR CAN0_0
	ExcpVector   CAN0_1_IRQHandler           ; Handler name for SR CAN0_1
	ExcpVector   CAN0_2_IRQHandler           ; Handler name for SR CAN0_2
	ExcpVector   CAN0_3_IRQHandler           ; Handler name for SR CAN0_3
	ExcpVector   CAN0_4_IRQHandler           ; Handler name for SR CAN0_4
	ExcpVector   CAN0_5_IRQHandler           ; Handler name for SR CAN0_5
	ExcpVector   CAN0_6_IRQHandler           ; Handler name for SR CAN0_6
	ExcpVector   CAN0_7_IRQHandler           ; Handler name for SR CAN0_7
	ExcpVector   USIC0_0_IRQHandler          ; Handler name for SR USIC0_0
	ExcpVector   USIC0_1_IRQHandler          ; Handler name for SR USIC0_1
	ExcpVector   USIC0_2_IRQHandler          ; Handler name for SR USIC0_2
	ExcpVector   USIC0_3_IRQHandler          ; Handler name for SR USIC0_3
	ExcpVector   USIC0_4_IRQHandler          ; Handler name for SR USIC0_4
	ExcpVector   USIC0_5_IRQHandler          ; Handler name for SR USIC0_5
	ExcpVector   USIC1_0_IRQHandler          ; Handler name for SR USIC1_0
	ExcpVector   USIC1_1_IRQHandler          ; Handler name for SR USIC1_1
	ExcpVector   USIC1_2_IRQHandler          ; Handler name for SR USIC1_2
	ExcpVector   USIC1_3_IRQHandler          ; Handler name for SR USIC1_3
	ExcpVector   USIC1_4_IRQHandler          ; Handler name for SR USIC1_4
	ExcpVector   USIC1_5_IRQHandler          ; Handler name for SR USIC1_5
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available
	ExcpVector   LEDTS0_0_IRQHandler         ; Handler name for SR LEDTS0_0
	DCD   0                           ; Not Available
	ExcpVector   FCE0_0_IRQHandler           ; Handler name for SR FCE0_0
	ExcpVector   GPDMA0_0_IRQHandler         ; Handler name for SR GPDMA0_0
	ExcpVector   SDMMC0_0_IRQHandler         ; Handler name for SR SDMMC0_0
	ExcpVector   USB0_0_IRQHandler           ; Handler name for SR USB0_0
	ExcpVector   ETH0_0_IRQHandler           ; Handler name for SR ETH0_0
	ExcpVector   ECAT0_0_IRQHandler          ; Handler name for SR ETH0_0
	DCD   0                           ; Not Available
	DCD   0                           ; Not Available


__Vectors_End

__Vectors       EQU   __vector_table
__Vectors_Size  EQU   __Vectors_End - __Vectors


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Default interrupt handlers.
;;      
        THUMB
        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reset_Handler
        LDR     SP, =sfe(CSTACK)
        LDR     R0, =SystemInit
        BLX     R0 
        LDR     R0, =__iar_program_start
        BX      R0 
 

        ProxyHandler NMI_Handler
        ProxyHandler HardFault_Handler
        ProxyHandler MemManage_Handler
        ProxyHandler BusFault_Handler
        ProxyHandler UsageFault_Handler
        ProxyHandler SVC_Handler
        ProxyHandler DebugMon_Handler
        ProxyHandler PendSV_Handler
        ProxyHandler SysTick_Handler
          
        ProxyHandler SCU_0_IRQHandler
        ProxyHandler ERU0_0_IRQHandler
        ProxyHandler ERU0_1_IRQHandler
        ProxyHandler ERU0_2_IRQHandler
        ProxyHandler ERU0_3_IRQHandler
        ProxyHandler ERU1_0_IRQHandler
        ProxyHandler ERU1_1_IRQHandler
        ProxyHandler ERU1_2_IRQHandler
        ProxyHandler ERU1_3_IRQHandler
        ProxyHandler PMU0_0_IRQHandler
        ProxyHandler PMU0_1_IRQHandler
        ProxyHandler VADC0_C0_0_IRQHandler
        ProxyHandler VADC0_C0_1_IRQHandler
        ProxyHandler VADC0_C0_2_IRQHandler
        ProxyHandler VADC0_C0_3_IRQHandler
        ProxyHandler VADC0_G0_0_IRQHandler
        ProxyHandler VADC0_G0_1_IRQHandler
        ProxyHandler VADC0_G0_2_IRQHandler
        ProxyHandler VADC0_G0_3_IRQHandler
        ProxyHandler VADC0_G1_0_IRQHandler
        ProxyHandler VADC0_G1_1_IRQHandler
        ProxyHandler VADC0_G1_2_IRQHandler
        ProxyHandler VADC0_G1_3_IRQHandler
        ProxyHandler DAC0_0_IRQHandler
        ProxyHandler DAC0_1_IRQHandler
        ProxyHandler CCU40_0_IRQHandler
        ProxyHandler CCU40_1_IRQHandler
        ProxyHandler CCU40_2_IRQHandler
        ProxyHandler CCU40_3_IRQHandler
        ProxyHandler CCU41_0_IRQHandler
        ProxyHandler CCU41_1_IRQHandler
        ProxyHandler CCU41_2_IRQHandler
        ProxyHandler CCU41_3_IRQHandler
        ProxyHandler CCU80_0_IRQHandler
        ProxyHandler CCU80_1_IRQHandler
        ProxyHandler CCU80_2_IRQHandler
        ProxyHandler CCU80_3_IRQHandler
        ProxyHandler CAN0_0_IRQHandler
        ProxyHandler CAN0_1_IRQHandler
        ProxyHandler CAN0_2_IRQHandler
        ProxyHandler CAN0_3_IRQHandler
        ProxyHandler CAN0_4_IRQHandler
        ProxyHandler CAN0_5_IRQHandler
        ProxyHandler CAN0_6_IRQHandler
        ProxyHandler CAN0_7_IRQHandler
        ProxyHandler USIC0_0_IRQHandler
        ProxyHandler USIC0_1_IRQHandler
        ProxyHandler USIC0_2_IRQHandler
        ProxyHandler USIC0_3_IRQHandler
        ProxyHandler USIC0_4_IRQHandler
        ProxyHandler USIC0_5_IRQHandler
        ProxyHandler USIC1_0_IRQHandler
        ProxyHandler USIC1_1_IRQHandler
        ProxyHandler USIC1_2_IRQHandler
        ProxyHandler USIC1_3_IRQHandler
        ProxyHandler USIC1_4_IRQHandler
        ProxyHandler USIC1_5_IRQHandler
        ProxyHandler LEDTS0_0_IRQHandler
        ProxyHandler FCE0_0_IRQHandler
        ProxyHandler GPDMA0_0_IRQHandler
        ProxyHandler SDMMC0_0_IRQHandler
        ProxyHandler USB0_0_IRQHandler
        ProxyHandler ETH0_0_IRQHandler
        ProxyHandler ECAT0_0_IRQHandler		
          
        END
