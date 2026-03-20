/*
 * Program: n42.bin
 * Function: FUN_000d2b2c
 * Entry: 000d2b2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d2b2c(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  
  if (**(char **)(param_1 + 0x44) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x74);
    bVar2 = Espr;
    if ((bVar1 & 1) != 0) {
      bVar2 = Aspr;
    }
    uVar3 = (undefined2)((uint)bVar2 << 3);
    if (((nmot < VNSNMOTAN) && (B_nvnsad == 0)) && (((uint)CW_VNSABST & 1 << (bVar1 & 0x3f)) != 0))
    {
      if ((uint)(ushort)(*(short *)(&SPRZG_AN + (uint)bVar1 * 2) - (ushort)VNS_ANAB) <
          (uint)bVar2 << 3) {
        **(ushort **)(param_1 + 0x30) = *(short *)(&SPRZG_AN + (uint)bVar1 * 2) - (ushort)VNS_ANAB;
      }
      else {
        **(undefined2 **)(param_1 + 0x30) = uVar3;
      }
    }
    else {
      **(undefined2 **)(param_1 + 0x30) = uVar3;
    }
  }
  else if (**(char **)(param_1 + 0x44) == '\x02') {
    **(undefined2 **)(param_1 + 0x30) = **(undefined2 **)(param_1 + 0x4c);
  }
  return;
}

