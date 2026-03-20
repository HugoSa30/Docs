/*
 * Program: n42.bin
 * Function: FUN_00098458
 * Entry: 00098458
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098458(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = _DAT_003faec4;
  uVar6 = 0;
  if ((int)param_2 <= param_3) {
    do {
      bVar1 = *(byte *)(param_1 + param_2);
      uVar4 = (uint)bVar1;
      iVar7 = uVar4 * 0x14;
      iVar3 = _DAT_003fae80 + iVar7;
      if (*(char *)(iVar3 + 0xd) != '\0') {
        iVar5 = _DAT_003faf10 + (uint)bVar1 * 0x18;
        if (((&UNK_003fae78)[*(byte *)(iVar5 + 0x11)] & 0x82) == 0) {
          if (((&UNK_003fae78)[*(byte *)(iVar5 + 0x11)] & 1) == 0) {
            *(byte *)(iVar3 + 0xf) = *(byte *)(iVar3 + 0xf) & 0xfe;
            iVar3 = _DAT_003fae80 + iVar7;
            if ((*(char *)(iVar3 + 10) != '\x01') && (*(char *)(iVar3 + 10) != '\x02')) {
              if (*(char *)(iVar5 + 2) != -1) {
                if (*(char *)(iVar3 + 9) == '\0') {
                  *(undefined *)(iVar3 + 10) = 3;
                  *(undefined *)(_DAT_003fae80 + iVar7 + 9) = *(undefined *)(iVar5 + 2);
                }
                *(char *)(_DAT_003fae80 + iVar7 + 9) = *(char *)(_DAT_003fae80 + iVar7 + 9) + -1;
              }
              if ((uVar2 >> (uVar4 & 0x3f) & 1) != 0) {
                *(undefined *)(_DAT_003fae80 + iVar7 + 10) = 3;
                uVar6 = uVar6 | 1 << (uVar4 & 0x3f);
              }
              if (*(char *)(_DAT_003fae80 + iVar7 + 10) == '\x03') {
                *(undefined *)(_DAT_003fae80 + iVar7 + 0xe) = 1;
              }
            }
          }
          else {
            FUN_0009817c(bVar1);
            *(byte *)(_DAT_003fae80 + iVar7 + 0xf) = *(byte *)(_DAT_003fae80 + iVar7 + 0xf) | 1;
          }
        }
      }
      param_2 = param_2 + 1 & 0xff;
    } while ((int)param_2 <= param_3);
  }
  func_0x00f97e9c();
  _DAT_003faec4 = _DAT_003faec4 & ~uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

