/*
 * Program: n42.bin
 * Function: FUN_0013c634
 * Entry: 0013c634
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013c634(undefined4 param_1,uint param_2,int param_3,uint param_4,byte *param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  uint in_r11;
  int iVar1;
  int unaff_r29;
  int unaff_r30;
  int unaff_r31;
  
  while( true ) {
    if (((int)in_r11 < 0x84) || (0x87 < *(byte *)(unaff_r29 + unaff_r31))) {
      if (*(char *)(unaff_r29 + unaff_r31) == -0x7d) {
        if ((*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 1 & 1) == 0) {
          param_2 = param_8 & 0xff;
          if ((((*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 2 & 1) == 0) &&
              ((*(ushort *)(unaff_r29 + unaff_r31 + 2) & 1) != 0)) &&
             (*(char *)((uint)(*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 8) * 0xd + 0x1d44b5) ==
              '\x01')) {
            *(ushort *)(unaff_r29 + unaff_r31 + 4) =
                 *(ushort *)(unaff_r29 + unaff_r31 + 4) & 0xfffb | 4;
          }
        }
        else {
          param_4 = param_8 & 0xff;
          if (((*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 2 & 1) == 0) &&
             (*(char *)((uint)(*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 8) * 0xd + 0x1d44b5) ==
              '\x01')) {
            *(ushort *)(unaff_r29 + unaff_r31 + 4) =
                 *(ushort *)(unaff_r29 + unaff_r31 + 4) & 0xfffb | 4;
          }
        }
      }
    }
    else if ((*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 1 & 1) == 0) {
      if ((((*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 2 & 1) == 0) &&
          ((*(ushort *)(unaff_r29 + unaff_r31 + 2) & 1) != 0)) &&
         (*(char *)((uint)(*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 8) * 0xd + 0x1d44b5) == '\x01')
         ) {
        *(ushort *)(unaff_r29 + unaff_r31 + 4) = *(ushort *)(unaff_r29 + unaff_r31 + 4) & 0xfffb | 4
        ;
      }
      param_7 = param_7 + 1 & 0xff;
    }
    else {
      if (((*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 2 & 1) == 0) &&
         (*(char *)((uint)(*(ushort *)(unaff_r29 + unaff_r31 + 4) >> 8) * 0xd + 0x1d44b5) == '\x01')
         ) {
        *(ushort *)(unaff_r29 + unaff_r31 + 4) = *(ushort *)(unaff_r29 + unaff_r31 + 4) & 0xfffb | 4
        ;
      }
      *param_5 = *param_5 + 1;
    }
    param_8 = param_8 + 1 & 0xff;
    if (unaff_r30 <= (int)param_8) break;
    unaff_r31 = param_8 * 0x28;
    in_r11 = (uint)*(byte *)(unaff_r29 + unaff_r31);
  }
  if (*param_5 + param_7 == 1) {
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

