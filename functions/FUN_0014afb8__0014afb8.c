/*
 * Program: n42.bin
 * Function: FUN_0014afb8
 * Entry: 0014afb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0014afb8(double param_1,double param_2,double param_3,double param_4,int param_5,
                 int param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < param_5) {
    do {
      fVar1 = *(float *)(param_7 + uVar2 * 4);
      if (fVar1 <= (float)param_3) {
        if (fVar1 < (float)param_4) {
          *(float *)(param_7 + uVar2 * 4) = (float)param_4;
        }
      }
      else {
        *(float *)(param_7 + uVar2 * 4) = (float)param_3;
      }
      fVar1 = *(float *)(param_6 + uVar2 * 4);
      if (fVar1 <= (float)param_1) {
        if (fVar1 < (float)param_2) {
          *(float *)(param_6 + uVar2 * 4) = (float)param_2;
        }
      }
      else {
        *(float *)(param_6 + uVar2 * 4) = (float)param_1;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < param_5);
  }
  return;
}

