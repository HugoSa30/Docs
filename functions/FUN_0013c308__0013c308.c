/*
 * Program: n42.bin
 * Function: FUN_0013c308
 * Entry: 0013c308
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013c308(int param_1,uint param_2,uint param_3,uint param_4,byte *param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  byte bVar1;
  uint in_r12;
  int iVar2;
  uint unaff_r29;
  int unaff_r30;
  int unaff_r31;
  
  do {
    if (in_r12 != 1) goto LAB_0013c504;
    do {
      bVar1 = *param_5 + 1;
      *param_5 = bVar1;
      if (bVar1 < 2) {
        *(ushort *)(unaff_r31 + unaff_r30 + 4) = *(ushort *)(unaff_r31 + unaff_r30 + 4) & 0xfffb | 4
        ;
        param_3 = param_8 & 0xff;
      }
      else {
        *(ushort *)(unaff_r31 + unaff_r30 + 4) = *(ushort *)(unaff_r31 + unaff_r30 + 4) & 0xfffb;
        if (bVar1 == 2) {
          iVar2 = unaff_r31 + param_3 * 0x28;
          *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffb;
        }
      }
LAB_0013c504:
      while( true ) {
        while( true ) {
          param_8 = param_8 + 1 & 0xff;
          if (param_1 <= (int)param_8) {
            if (*param_5 == 1) {
              if (param_7 == 1) {
                *(ushort *)(&UNK_003fcf50 + unaff_r29 * 0x28) =
                     *(ushort *)(&UNK_003fcf50 + unaff_r29 * 0x28) & 0xfffb;
                *(ushort *)(&UNK_003fcf50 + param_3 * 0x28) =
                     *(ushort *)(&UNK_003fcf50 + param_3 * 0x28) & 0xfffb;
                FUN_0013c85c();
                return;
              }
              if (1 < (int)param_7) {
                *(ushort *)(&UNK_003fcf50 + param_3 * 0x28) =
                     *(ushort *)(&UNK_003fcf50 + param_3 * 0x28) & 0xfffb;
                FUN_0013c85c();
                return;
              }
              if (param_4 != 0xff) {
                *(ushort *)(&UNK_003fcf50 + param_4 * 0x28) =
                     *(ushort *)(&UNK_003fcf50 + param_4 * 0x28) & 0xfffb;
                FUN_0013c85c();
                return;
              }
            }
            else if (*param_5 < 2) {
              if ((param_7 == 1) && (param_2 != 0xff)) {
                *(ushort *)(&UNK_003fcf50 + param_2 * 0x28) =
                     *(ushort *)(&UNK_003fcf50 + param_2 * 0x28) & 0xfffb;
              }
            }
            else if (param_7 == 1) {
              *(ushort *)(&UNK_003fcf50 + unaff_r29 * 0x28) =
                   *(ushort *)(&UNK_003fcf50 + unaff_r29 * 0x28) & 0xfffb;
              FUN_0013c85c();
              return;
            }
            return;
          }
          unaff_r30 = param_8 * 0x28;
          if ((0x83 < *(byte *)(unaff_r31 + unaff_r30)) && (*(byte *)(unaff_r31 + unaff_r30) < 0x88)
             ) break;
          if (*(char *)(unaff_r31 + unaff_r30) == -0x7d) {
            if ((*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 1 & 1) == 0) {
              param_2 = param_8;
              if ((((*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 2 & 1) == 0) &&
                  ((*(ushort *)(unaff_r31 + unaff_r30 + 2) & 1) != 0)) &&
                 (*(char *)((uint)(*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 8) * 0xd + 0x1d44b5) ==
                  '\x01')) {
                *(ushort *)(unaff_r31 + unaff_r30 + 4) =
                     *(ushort *)(unaff_r31 + unaff_r30 + 4) & 0xfffb | 4;
              }
            }
            else {
              param_4 = param_8;
              if (((*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 2 & 1) == 0) &&
                 (*(char *)((uint)(*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 8) * 0xd + 0x1d44b5) ==
                  '\x01')) {
                *(ushort *)(unaff_r31 + unaff_r30 + 4) =
                     *(ushort *)(unaff_r31 + unaff_r30 + 4) & 0xfffb | 4;
              }
            }
          }
        }
        if ((*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 1 & 1) != 0) break;
        if (((*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 2 & 1) == 1) ||
           (((*(ushort *)(unaff_r31 + unaff_r30 + 2) & 1) != 0 &&
            (*(char *)((uint)(*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 8) * 0xd + 0x1d44b5) ==
             '\x01')))) {
          param_7 = param_7 + 1 & 0xff;
          if (param_7 < 2) {
            *(ushort *)(unaff_r31 + unaff_r30 + 4) =
                 *(ushort *)(unaff_r31 + unaff_r30 + 4) & 0xfffb | 4;
            unaff_r29 = param_8;
          }
          else {
            *(ushort *)(unaff_r31 + unaff_r30 + 4) = *(ushort *)(unaff_r31 + unaff_r30 + 4) & 0xfffb
            ;
            if (param_7 == 2) {
              iVar2 = unaff_r31 + unaff_r29 * 0x28;
              *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffb;
            }
          }
        }
      }
    } while ((*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 2 & 1) == 1);
    in_r12 = (uint)*(byte *)((uint)(*(ushort *)(unaff_r31 + unaff_r30 + 4) >> 8) * 0xd + 0x1d44b5);
  } while( true );
}

