; *******************************************************
; * Simple Little Operating System - SLOS
; *******************************************************

; ******************************************************* 
; *
; * -----------------------------------------------------
; * NOTE:   This file is automatically generated
; * -----------------------------------------------------
; *
; * Project	: mmuSLOS
; * Version	: 0.03
; * Originator	: Andrew N. Sloss
; *
; ******************************************************* 

     EXPORT MmuPCB_CurrentTask
     EXPORT MmuPCB_Table
     EXPORT MmuPCB_IRQStack
     EXPORT MmuPCB_PtrCurrentTask
     EXPORT MmuPCB_PtrNextTask

     EXPORT MmuPCB_PtrTask1
     EXPORT MmuPCB_BottomTask1
     EXPORT MmuPCB_RegionTable1

     EXPORT MmuPCB_PtrTask2
     EXPORT MmuPCB_BottomTask2
     EXPORT MmuPCB_RegionTable2

     EXPORT MmuPCB_PtrTask3
     EXPORT MmuPCB_BottomTask3
     EXPORT MmuPCB_RegionTable3
     EXPORT pcbSetUp

; -- pcbSetUp ----------------------------------------------------------------
;
; Description : PCB setup 
;
; Parameters  : r0=<thread entry address>
;               r1=<PCB Address>
;               r2=<stack address>
; Return      : setup PCB
; Notes       :
;

     AREA PCBSetUp,CODE,READWRITE 
pcbSetUp
     STR     r0,[r1,#-4]          ; PCB[-4]=C_TaskEntry<2>
     STR     r0,[r1,#-64]         ; PCB[-64]=C_TaskEntry<2>
     STR     r2,[r1,#-8]          ; PCB[-8]=<stack address>
     MOV     r0,#0x50             
     STR     r0,[r1,#-68]         ; PCB[-68]=iFt_User
     MOV     pc,lr
     
     AREA MmuPCBTable,DATA,READWRITE

MmuPCB_Table

     DCD     MmuPCB_PtrTask1
     DCD     MmuPCB_PtrTask2
     DCD     MmuPCB_PtrTask3

     AREA MmuPCBIRQ,DATA,READWRITE

MmuPCB_IRQStack
     DCD     0x9000     ; real value

     AREA MmuPCBPtrCURRENT,DATA,READWRITE

MmuPCB_PtrCurrentTask
     DCD     0x1

     AREA MmuPCBPtrNEXT,DATA,READWRITE

MmuPCB_PtrNextTask
     DCD     0x1

     AREA MmuPCBActive,DATA,READWRITE

MmuPCB_CurrentTask
     DCD 0x1

; -------------------------------------------------------
; Task(1): Full MMU PCB 
; mmupcb 
; {
; PCB
; RegionTable
; }
; -------------------------------------------------------

     AREA PCB1,DATA,READWRITE
MmuPCB_BottomTask1
     % 72
MmuPCB_PtrTask1

MmuPCB_RegionTable1
     DCD     0x400000          ; virtual base address 
     DCD     8                 ; Virtual address (page size 8x4k=32k) 
     DCD     (3<<4)+(3)        ; permissions (RWXRWX)
     DCD     6                 ; CWT
     DCD     1                 ; ACTIVE 
     DCD     0x3c400           ; L2 Base Page Table Address
     DCD     1                 ; Coarse Ganuality (=4k)
     DCD     0x03              ; DOM 
     DCD     0x50000           ; Physical Address
     DCD     0x20000           ; Load Address 

; -------------------------------------------------------
; Task(2): Full MMU PCB 
; mmupcb 
; {
; PCB
; RegionTable
; }
; -------------------------------------------------------

     AREA PCB2,DATA,READWRITE
MmuPCB_BottomTask2
     % 72
MmuPCB_PtrTask2

MmuPCB_RegionTable2
     DCD     0x400000           ; virtual base address 
     DCD     8                  ; Virtual address (page size 8x4k=32k) 
     DCD     (3<<4)+(3)         ; permissions (RWXRWX)
     DCD     6                  ; CWT
     DCD     1                  ; ACTIVE 
     DCD     0x3c800            ; L2 Base Page Table Address
     DCD     1                  ; Coarse Ganuality (=4k)
     DCD     0x03               ; DOM 
     DCD     0x58000            ; Physical Address
     DCD     0x28000            ; Load Address 

; -------------------------------------------------------
; Task(3): Full MMU PCB 
; mmupcb 
; {
; PCB
; RegionTable
; }
; -------------------------------------------------------

     AREA PCB3,DATA,READWRITE
MmuPCB_BottomTask3
     % 72
MmuPCB_PtrTask3

MmuPCB_RegionTable3
     DCD     0x400000          ; virtual base address 
     DCD     8                 ; Virtual address (page size 8x4k=32k) 
     DCD     (3<<4)+(3)        ; permissions (RWXRWX)
     DCD     6                 ; CWT
     DCD     1                 ; ACTIVE 
     DCD     0x3cc00           ; L2 Base Page Table Address
     DCD     1                 ; Coarse Ganuality (=4k)
     DCD     0x03              ; DOM 
     DCD     0x60000           ; Physical Address
     DCD     0x30000           ; Load Address 
     END
