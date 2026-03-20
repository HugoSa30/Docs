/*
 * Program: n42.bin
 * Function: FUN_000917b4
 * Entry: 000917b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000917b4(void)

{
  char cVar1;
  char cVar2;
  undefined uVar4;
  undefined4 uVar3;
  
  if ((DAT_003f9f26 == '\x01') || (DAT_003f9f26 == '\x02')) {
    if (DAT_003f9e30 == '\0') {
      uVar4 = 0x10;
    }
    else {
      cVar1 = *_DAT_003f9f18;
      if (((cVar1 == -0x7f) || (cVar1 == -0x7c)) || (cVar1 == -0x7b)) {
        if (DAT_003f9f26 == '\x02') {
          cVar2 = FUN_00091094((1 << ((byte)_DAT_003f9f18[1] >> 5)) *
                               (((byte)_DAT_003f9f18[1] & 0x1f) + 0x20) * 0x1900 >> 5);
          if (cVar2 != '\0') {
            uVar4 = 0x31;
            goto LAB_000918dc;
          }
          FUN_000955fc(0x1000);
        }
        DAT_003fa0dc = cVar1 + '\x7f';
        if (cVar1 == -0x7f) {
          FUN_00096a20(0);
        }
        else if (cVar1 == -0x7c) {
          FUN_00096a20(1);
        }
        else {
          if (cVar1 != -0x7b) {
            uVar4 = 0x12;
            goto LAB_000918dc;
          }
          FUN_00096a20(2);
        }
        *_DAT_003f9f1c = cVar1;
        uVar3 = 10;
        goto LAB_000918e8;
      }
      uVar4 = 0x12;
    }
  }
  else {
    uVar4 = 0x12;
  }
LAB_000918dc:
  *_DAT_003f9f20 = uVar4;
  uVar3 = 0x14;
LAB_000918e8:
  FUN_00095b8c(uVar3,1);
  return;
}

