/*
 * Program: n42.bin
 * Function: FUN_001a2248
 * Entry: 001a2248
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a2248(void)

{
  char *pcVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  
  if ((_DAT_003fbc8e & 0xff00) != 0) {
    *_DAT_003fbc88 = 0xff;
    uVar3 = _DAT_003fbc8e;
    puVar2 = _DAT_003fbc88;
    _DAT_003fbc88[1] = (char)_DAT_003fbc8e;
    puVar2[2] = (char)(uVar3 >> 8);
    iVar4 = func_0xff2177bc(DAT_00fa9cac);
    if (iVar4 == 0) {
      func_0xff2176fc(DAT_00fa9cac,_DAT_00fa9d60,_DAT_003fbc88);
      if ((_DAT_003fbc8e & 0x3000) != 0) {
        FUN_001a2070();
      }
      _DAT_003fbc8e = 0;
      DAT_003fbc79 = DAT_003fbc79 & 0xf7;
      DAT_003fbc94 = '\0';
    }
    else {
      DAT_003fbc94 = DAT_003fbc94 + '\x01';
      if (DAT_003fbc94 != '\0') {
        DAT_003fbc79 = DAT_003fbc79 | 8;
      }
    }
  }
  pcVar1 = _DAT_003fbc84;
  if (*_DAT_003fbc84 == -1) {
    _DAT_003fbc84[2] = (char)_DAT_003fbc7a;
    iVar4 = func_0xff2177bc(DAT_00fa9cac);
    if (iVar4 == 0) {
      iVar4 = func_0xff2176fc(DAT_00fa9cac,_DAT_00fa9d60,_DAT_003fbc84);
      if (iVar4 != 0) {
        *_DAT_003fbc84 = '\0';
        _DAT_003fbc7a = 0;
        DAT_003fbc79 = DAT_003fbc79 & 0xf7;
        DAT_003fbc94 = '\0';
        if (0x2f < (byte)_DAT_003fbc84[1]) {
          FUN_001a2070();
        }
      }
    }
    else {
      DAT_003fbc94 = DAT_003fbc94 + '\x01';
      if (DAT_003fbc94 != '\0') {
        DAT_003fbc79 = DAT_003fbc79 | 8;
      }
    }
  }
  else if (*_DAT_003fbc84 == -2) {
    _DAT_003fbc84[2] = (char)_DAT_003fbc7a;
    iVar4 = func_0xff2176fc(DAT_00fa9cac,_DAT_00fa9d60,pcVar1);
    if (iVar4 != 0) {
      *_DAT_003fbc84 = '\0';
    }
  }
  if ((_DAT_003fbc7a != 0) && (*_DAT_003fbc7c == '\0')) {
    _DAT_003fbc7a = 0;
  }
  return;
}

