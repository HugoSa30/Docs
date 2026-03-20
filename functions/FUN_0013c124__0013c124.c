/*
 * Program: n42.bin
 * Function: FUN_0013c124
 * Entry: 0013c124
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013c124(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  
  do {
    uVar1 = param_4;
    if ((int)param_5 < 2) goto LAB_0013c190;
    if (*(char *)(param_6 + param_2) != -0x7d) goto LAB_0013c190;
    do {
      if (param_4 == 0xff) {
        uVar1 = param_3 & 0xff;
      }
      else {
        uVar1 = param_4;
        if ((byte)(&DAT_001d44bb)[(uint)(*(ushort *)(param_6 + param_2 + 4) >> 8) * 0xd] <
            (byte)(&DAT_001d44bb)[(uint)(*(ushort *)(param_6 + param_4 * 0x28 + 4) >> 8) * 0xd]) {
          uVar1 = param_3 & 0xff;
        }
      }
LAB_0013c190:
      while( true ) {
        do {
          param_4 = uVar1;
          param_3 = param_3 + 1 & 0xff;
          if (param_1 <= (int)param_3) {
            if (param_4 == 0xff) {
              ffzdfp = 0;
            }
            else {
              ffzdfp = (&UNK_003fcf4c)[param_4 * 0x28];
            }
            return;
          }
          param_2 = param_3 * 0x28;
          uVar1 = param_4;
        } while (((*(ushort *)(param_6 + param_2 + 4) >> 2 & 1) == 0) ||
                ((*(ushort *)(param_6 + param_2 + 4) >> 1 & 1) == 0));
        if (cw_erfil != 0) break;
        uVar1 = param_3;
        if ((param_4 != 0xff) &&
           (uVar1 = param_4,
           (byte)(&DAT_001d44bb)[(uint)(*(ushort *)(param_6 + param_2 + 4) >> 8) * 0xd] <
           (byte)(&DAT_001d44bb)[(uint)(*(ushort *)(param_6 + param_4 * 0x28 + 4) >> 8) * 0xd])) {
          uVar1 = param_3;
        }
      }
      param_5 = (uint)errorCntTcsort;
    } while ((((param_5 == 0) || (*(byte *)(param_6 + param_2) < 0x83)) ||
             (0x87 < *(byte *)(param_6 + param_2))) || (param_5 == 1));
  } while( true );
}

