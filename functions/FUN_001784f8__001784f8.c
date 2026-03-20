/*
 * Program: n42.bin
 * Function: FUN_001784f8
 * Entry: 001784f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001784f8(double param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = 0;
  if (0 < param_2) {
    iVar3 = *param_4;
    do {
      iVar1 = uVar4 * 4;
      fVar2 = (float)param_1 * *(float *)(param_5 + iVar1) + *(float *)(iVar3 + iVar1);
      *(float *)(iVar3 + iVar1) = fVar2;
      if (fVar2 <= _DAT_001c7fb4) {
        if (fVar2 < -_DAT_001c7fb4) {
          *(float *)(iVar3 + uVar4 * 4) = -_DAT_001c7fb4;
        }
      }
      else {
        *(float *)(iVar3 + uVar4 * 4) = _DAT_001c7fb4;
      }
      uVar5 = 1;
      if (0 < param_3) {
        iVar1 = uVar4 * 4;
        do {
          iVar6 = param_4[uVar5];
          fVar2 = (float)param_1 * *(float *)(param_6 + uVar5 * 4 + -4) *
                  *(float *)(param_5 + iVar1) + *(float *)(iVar6 + iVar1);
          *(float *)(iVar6 + iVar1) = fVar2;
          if (fVar2 <= _DAT_001c7fb4) {
            if (fVar2 < -_DAT_001c7fb4) {
              *(float *)(iVar6 + iVar1) = -_DAT_001c7fb4;
            }
          }
          else {
            *(float *)(iVar6 + iVar1) = _DAT_001c7fb4;
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while ((int)uVar5 <= param_3);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while ((int)uVar4 < param_2);
  }
  return;
}

