/*
 * Program: n42.bin
 * Function: FUN_001a1c00
 * Entry: 001a1c00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a1c00(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar10;
  int iVar9;
  
  iVar6 = param_1 * 10;
  param_1 = param_1 * 0xc;
  if ((&UNK_003fbc25)[param_1] == '\x10') {
    _DAT_003fb9bc = _DAT_002fc014;
    _DAT_002fc014 = 0;
    if (DAT_00fa9ca8 == '\0') {
      bVar3 = func_0xff2177bc(*(undefined *)(iVar6 + 0xfa9cb8));
    }
    else {
      bVar3 = 0;
      bVar10 = *(byte *)(iVar6 + 0xfa9cb8);
      if (bVar10 <= *(byte *)(iVar6 + 0xfa9cb9)) {
        do {
          bVar2 = func_0xff2177bc(bVar10);
          bVar3 = bVar2 | bVar3;
          bVar10 = bVar10 + 1;
        } while (bVar10 <= *(byte *)(iVar6 + 0xfa9cb9));
      }
    }
    if ((bVar3 == 0) && ((DAT_003fbc79 & 8) == 0)) {
      bVar3 = *(byte *)(iVar6 + 0xfa9cb1);
      bVar10 = (&UNK_003fbc26)[param_1];
      iVar9 = *(int *)(&DAT_00fa9cb2 + iVar6) + (uint)bVar10 * 0x2b + (uint)bVar3 * -0x2b;
      if (DAT_00fa9ca8 == '\0') {
        func_0xff2176fc(*(undefined *)(iVar6 + 0xfa9cb8),*(undefined4 *)(&DAT_003fbc20 + param_1),
                        iVar9 + 0x23);
        cVar1 = (&UNK_003fbc26)[param_1];
        (&UNK_003fbc26)[param_1] = cVar1 + 1U;
        if ((byte)(&DAT_003fbc27)[param_1] < (byte)(cVar1 + 1U)) {
          (&UNK_003fbc25)[param_1] = 0x20;
          (&UNK_003fbc26)[param_1] = *(undefined *)(iVar6 + 0xfa9cb1);
          uVar8 = 4;
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar7 = (uint)*(byte *)(iVar6 + 0xfa9cb8);
        bVar2 = *(byte *)(iVar6 + 0xfa9cb9);
        iVar4 = bVar2 - uVar7;
        uVar5 = iVar4 - ((uint)(byte)(&DAT_003fbc27)[param_1] - (uint)bVar10);
        if ((uVar5 & 0x80) == 0) {
          uVar7 = uVar7 + uVar5 & 0xff;
          (&UNK_003fbc25)[param_1] = 0x20;
          (&UNK_003fbc26)[param_1] = bVar3;
          uVar8 = 4;
        }
        else {
          (&UNK_003fbc26)[param_1] = bVar10 + (char)iVar4 + '\x01';
          uVar8 = 0;
        }
        if (uVar7 <= bVar2) {
          do {
            func_0xff2176fc(uVar7,*(undefined4 *)(&DAT_003fbc20 + param_1),iVar9 + 0x23);
            iVar9 = iVar9 + 0x2b;
            uVar7 = uVar7 + 1 & 0xff;
          } while (uVar7 <= *(byte *)(iVar6 + 0xfa9cb9));
        }
      }
    }
    else {
      uVar8 = 2;
    }
    _DAT_002fc014 = _DAT_003fb9bc;
  }
  else {
    uVar8 = 3;
  }
  return uVar8;
}

