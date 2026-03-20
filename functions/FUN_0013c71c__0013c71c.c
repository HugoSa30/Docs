/*
 * Program: n42.bin
 * Function: FUN_0013c71c
 * Entry: 0013c71c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013c71c(undefined4 param_1,uint param_2,int param_3,uint param_4,byte *param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  uint in_r12;
  int iVar1;
  int unaff_r29;
  int unaff_r30;
  
  do {
    while( true ) {
      while( true ) {
        param_8 = param_8 + 1 & 0xff;
        if (unaff_r30 <= (int)param_8) {
          if ((uint)*param_5 + (in_r12 & 0xff) == 1) {
            if (param_4 != 0xff) {
              iVar1 = param_3 + param_4 * 0x28;
              *(ushort *)(iVar1 + 4) = *(ushort *)(iVar1 + 4) & 0xfffb;
            }
            if (param_2 != 0xff) {
              param_3 = param_3 + param_2 * 0x28;
              *(ushort *)(param_3 + 4) = *(ushort *)(param_3 + 4) & 0xfffb;
            }
          }
          return;
        }
        iVar1 = param_8 * 0x28;
        if ((0x83 < *(byte *)(unaff_r29 + iVar1)) && (*(byte *)(unaff_r29 + iVar1) < 0x88)) break;
        if (*(char *)(unaff_r29 + iVar1) == -0x7d) {
          if ((*(ushort *)(unaff_r29 + iVar1 + 4) >> 1 & 1) == 0) {
            param_2 = param_8;
            if ((((*(ushort *)(unaff_r29 + iVar1 + 4) >> 2 & 1) == 0) &&
                ((*(ushort *)(unaff_r29 + iVar1 + 2) & 1) != 0)) &&
               (*(char *)((uint)(*(ushort *)(unaff_r29 + iVar1 + 4) >> 8) * 0xd + 0x1d44b5) ==
                '\x01')) {
              *(ushort *)(unaff_r29 + iVar1 + 4) = *(ushort *)(unaff_r29 + iVar1 + 4) & 0xfffb | 4;
            }
          }
          else {
            param_4 = param_8;
            if (((*(ushort *)(unaff_r29 + iVar1 + 4) >> 2 & 1) == 0) &&
               (*(char *)((uint)(*(ushort *)(unaff_r29 + iVar1 + 4) >> 8) * 0xd + 0x1d44b5) ==
                '\x01')) {
              *(ushort *)(unaff_r29 + iVar1 + 4) = *(ushort *)(unaff_r29 + iVar1 + 4) & 0xfffb | 4;
            }
          }
        }
      }
      if ((*(ushort *)(unaff_r29 + iVar1 + 4) >> 1 & 1) == 0) break;
      if (((*(ushort *)(unaff_r29 + iVar1 + 4) >> 2 & 1) == 0) &&
         (*(char *)((uint)(*(ushort *)(unaff_r29 + iVar1 + 4) >> 8) * 0xd + 0x1d44b5) == '\x01')) {
        *(ushort *)(unaff_r29 + iVar1 + 4) = *(ushort *)(unaff_r29 + iVar1 + 4) & 0xfffb | 4;
      }
      *param_5 = *param_5 + 1;
    }
    if ((((*(ushort *)(unaff_r29 + iVar1 + 4) >> 2 & 1) == 0) &&
        ((*(ushort *)(unaff_r29 + iVar1 + 2) & 1) != 0)) &&
       (*(char *)((uint)(*(ushort *)(unaff_r29 + iVar1 + 4) >> 8) * 0xd + 0x1d44b5) == '\x01')) {
      *(ushort *)(unaff_r29 + iVar1 + 4) = *(ushort *)(unaff_r29 + iVar1 + 4) & 0xfffb | 4;
    }
    in_r12 = (in_r12 & 0xff) + 1;
  } while( true );
}

