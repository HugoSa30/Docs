/*
 * Program: n42.bin
 * Function: FUN_001037c4
 * Entry: 001037c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_001037c4(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  uVar2 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)(param_1 + uVar2) != *(char *)(param_1 + param_2 + uVar2)) {
        bVar1 = false;
      }
      uVar2 = uVar2 + 1 & 0xff;
      if (param_2 <= (int)uVar2) {
        if (bVar1) {
          return param_1;
        }
        break;
      }
    } while (bVar1);
    bVar1 = true;
    uVar2 = 0;
    if (0 < param_2) {
      do {
        if (*(char *)(param_1 + uVar2) != *(char *)(param_1 + param_2 * 2 + uVar2)) {
          bVar1 = false;
        }
        uVar2 = uVar2 + 1 & 0xff;
        if (param_2 <= (int)uVar2) {
          if (bVar1) {
            return param_1;
          }
          break;
        }
      } while (bVar1);
      bVar1 = true;
      uVar2 = 0;
      if (param_2 < 1) {
LAB_001038bc:
        param_1 = param_1 + param_2;
      }
      else {
        do {
          if (*(char *)(param_1 + param_2 + uVar2) != *(char *)(param_1 + param_2 * 2 + uVar2)) {
            bVar1 = false;
          }
          uVar2 = uVar2 + 1 & 0xff;
          if (param_2 <= (int)uVar2) {
            if (bVar1) goto LAB_001038bc;
            break;
          }
        } while (bVar1);
        param_1 = 0;
      }
    }
  }
  return param_1;
}

