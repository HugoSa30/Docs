/*
 * Program: n42.bin
 * Function: FUN_0013ca3c
 * Entry: 0013ca3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013ca3c(double param_1,undefined4 param_2,byte param_3,undefined *param_4,
                 undefined4 param_5,undefined4 param_6,byte param_7)

{
  float fVar1;
  byte bVar2;
  int in_r12;
  
  do {
    *(float *)(param_4 + in_r12) = (float)param_1;
    param_7 = param_7 + 1;
    if (3 < param_7) {
      while( true ) {
        while( true ) {
          fVar1 = _DAT_0001bdc4;
          param_3 = param_3 + 1;
          if (4 < param_3) {
            FUN_0013caf8(param_2,1);
            return;
          }
          if (param_3 != 1) break;
          bVar2 = 0;
          do {
            *(float *)(&UNK_003fda84 + (uint)bVar2 * 4) = fVar1;
            bVar2 = bVar2 + 1;
          } while (bVar2 < 4);
        }
        if (param_3 == 2) break;
        if (param_3 == 3) {
          bVar2 = 0;
          do {
            *(float *)(&UNK_003fdae4 + (uint)bVar2 * 4) = fVar1;
            bVar2 = bVar2 + 1;
          } while (bVar2 < 4);
        }
        else if (param_3 == 4) {
          bVar2 = 0;
          do {
            *(float *)(&UNK_003fdb14 + (uint)bVar2 * 4) = fVar1;
            bVar2 = bVar2 + 1;
          } while (bVar2 < 4);
        }
      }
      param_7 = 0;
      param_1 = (double)_DAT_0001bdc4;
      param_4 = &UNK_003fdab4;
    }
    in_r12 = (uint)param_7 << 2;
  } while( true );
}

