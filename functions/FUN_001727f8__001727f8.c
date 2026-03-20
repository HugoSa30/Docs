/*
 * Program: n42.bin
 * Function: FUN_001727f8
 * Entry: 001727f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001727f8(void)

{
  undefined2 uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  
  if (((DAT_005b8937 != '\0') || ((DAT_005b8e6b & 0x80) != 0)) || ((DAT_005b8e6b & 0x40) != 0)) {
    if (DAT_005b9abc != 0) {
      uVar4 = ((uint)DAT_005b9abe * (uint)_DAT_001c7930) / (uint)DAT_005b9abc;
      if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      DAT_005b9a08 = (undefined2)uVar4;
    }
    uVar1 = func_0xff2189bc(0x1c78ea,DAT_005b9a08);
    func_0xff222514(&DAT_003fae50,uVar1,_DAT_001c792a);
    if (((DAT_005b8e6b & 0x80) == 0) && ((DAT_005b8e6b & 0x40) == 0)) {
      uVar4 = _DAT_003fae50 >> 0x10;
    }
    else {
      uVar4 = (uint)tmot;
    }
    toel_w = (word)uVar4;
    if (0x14b < uVar4) {
      toel_w = 0x14b;
    }
    DAT_005b8937 = '\0';
  }
  if (((DAT_005b8e69 < DAT_001c7c62) || ((DAT_005b8e6b & 0x80) != 0)) ||
     ((DAT_005b8e6b & 0x40) != 0)) {
    DAT_005b88d6 = 0;
  }
  else {
    DAT_005b88d6 = 1;
  }
  func_0xff222550(&DAT_003fae54,nmot,DAT_001c7934);
  DAT_005b88e0 = (byte)((ushort)_DAT_003fae54 >> 8);
  if (DAT_005b8938 != '\0') {
    DAT_005b8938 = '\0';
    DAT_005b88e2 = func_0xff2189bc(&DAT_001d0b96,DAT_005b9aba);
    if ((B_nmot != '\0') && (tmot < DAT_001c7939)) {
      if (DAT_005b88e3 < DAT_001c7933) {
        if (DAT_005b88e3 + 1 < 0x100) {
          DAT_005b88e3 = (byte)(DAT_005b88e3 + 1);
        }
        else {
          DAT_005b88e3 = 0xff;
        }
      }
      else if (DAT_005b8e43 < DAT_001c7937) {
        if (DAT_005b8e43 + 1 < 0x100) {
          DAT_005b8e43 = (byte)(DAT_005b8e43 + 1);
        }
        else {
          DAT_005b8e43 = 0xff;
        }
        DAT_005b9da4 = DAT_005b9da4 + DAT_005b88e2;
      }
      else if (DAT_001c7937 == DAT_005b8e43) {
        uVar4 = DAT_005b9da4 / DAT_001c7937;
        if (0xff < uVar4) {
          uVar4 = 0xff;
        }
        DAT_005b8e42 = (undefined)uVar4;
        DAT_005b88d7 = (uVar4 & 0xff) < (uint)DAT_001c793e;
        DAT_005b88d8 = DAT_005b88d7;
        if (DAT_005b8e43 + 1 < 0x100) {
          DAT_005b8e43 = (byte)(DAT_005b8e43 + 1);
        }
        else {
          DAT_005b8e43 = 0xff;
        }
      }
    }
    _DAT_003fae54 = (ushort)nmot << 8;
    if ((DAT_001c7938 < tmot) && (DAT_001c7936 < nmot)) {
      if (DAT_005b88e4 < DAT_001c7935) {
        if (DAT_005b88e4 + 1 < 0x100) {
          DAT_005b88e4 = (byte)(DAT_005b88e4 + 1);
        }
        else {
          DAT_005b88e4 = 0xff;
        }
        if ((uint)DAT_005b88da + (uint)DAT_005b88e0 < 0x10000) {
          DAT_005b88da = (ushort)((uint)DAT_005b88da + (uint)DAT_005b88e0);
        }
        else {
          DAT_005b88da = 0xffff;
        }
        uVar4 = (uint)DAT_005b88dc + (uint)DAT_005b88e2;
        if (uVar4 < 0x10000) {
          DAT_005b88dc = (ushort)uVar4;
        }
        else {
          DAT_005b88dc = 0xffff;
        }
      }
      else {
        uVar4 = (uint)DAT_005b88da / (uint)DAT_001c7935;
        if (0xff < uVar4) {
          uVar4 = 0xff;
        }
        DAT_005b88e1 = (undefined)uVar4;
        uVar3 = (ushort)((uint)DAT_005b88dc / (uint)DAT_001c7935);
        if (0xff < (uint)DAT_005b88dc / (uint)DAT_001c7935) {
          uVar3 = 0xff;
        }
        DAT_005b8e40 = (undefined)uVar3;
        cVar2 = func_0xff218eec(DAT_001c7908,&DAT_001c7909,0x1c7919,uVar4 & 0xff);
        uVar4 = (uint)(short)((uVar3 & 0xff) + (short)cVar2);
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xff < (int)uVar4) {
          uVar4 = 0xff;
        }
        DAT_005b8e3e = (undefined)uVar4;
        uVar3 = DAT_005b9a0a + 1;
        if (0xff < (ushort)(DAT_005b9a0a + 1)) {
          uVar3 = 0xff;
        }
        DAT_005b9a0a = uVar3 & 0xff;
        DAT_005b9da8 = DAT_005b9da8 + (uVar4 & 0xff);
        if ((DAT_005b88d9 == '\0') && (DAT_005b9a0a == _DAT_001c792e)) {
          uVar4 = DAT_005b9da8 / _DAT_001c792e;
          if (0xff < uVar4) {
            uVar4 = 0xff;
          }
          DAT_005b8e3f = (undefined)uVar4;
          DAT_005b88d9 = '\x01';
          DAT_005b88d8 = (uVar4 & 0xff) < (uint)DAT_001c793c;
          DAT_005b88d7 = (bool)DAT_005b88d8 || (uVar4 & 0xff) < (uint)DAT_001c793a;
          DAT_005b9a0a = 0;
          DAT_005b9da8 = 0;
        }
        if (_DAT_001c792c <= DAT_005b9a0a) {
          uVar4 = DAT_005b9da8 / _DAT_001c792c;
          if (0xff < uVar4) {
            uVar4 = 0xff;
          }
          DAT_005b8e41 = (undefined)uVar4;
          DAT_005b9a0a = 0;
          DAT_005b9da8 = 0;
          cVar2 = func_0xff2220e4(&UNK_003fae56,uVar4 & 0xff,DAT_001c793b,DAT_001c7932);
          DAT_005b88d7 = cVar2 == '\0';
          cVar2 = func_0xff2220e4(&UNK_003fae57,DAT_005b8e41,DAT_001c793d,DAT_001c7932);
          DAT_005b88d8 = cVar2 == '\0';
          if ((bool)DAT_005b88d8) {
            DAT_005b88d7 = 1;
          }
        }
        DAT_005b88e4 = 0;
        DAT_005b88da = 0;
        DAT_005b88dc = 0;
      }
    }
  }
  if (((DAT_005b8e6b & 0x80) != 0) || ((DAT_005b8e6b & 0x40) != 0)) {
    DAT_005b9a0a = 0;
    DAT_005b8e43 = 0;
    DAT_005b88d9 = '\0';
    DAT_005b88d7 = 0;
    DAT_005b88d8 = 0;
    DAT_005b9da8 = 0;
    DAT_005b9da4 = 0;
    DAT_005b88e4 = 0;
    DAT_005b88dc = 0;
    DAT_005b88da = 0;
    _DAT_003fae54 = (ushort)nmot << 8;
  }
  return;
}

