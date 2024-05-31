static const DWORD texture_feedback_ld_code_dxbc[] =
{
    0x43425844, 0xe165b596, 0xe7589c76, 0xe38a2020, 0x4ca87505, 0x00000001, 0x000001cc, 0x00000004,
    0x00000030, 0x00000064, 0x000000b0, 0x000001bc, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008,
    0x00000020, 0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000030f, 0x505f5653, 0x5449534f,
    0x004e4f49, 0x4e47534f, 0x00000044, 0x00000002, 0x00000008, 0x00000038, 0x00000000, 0x00000000,
    0x00000003, 0x00000000, 0x0000000f, 0x00000038, 0x00000001, 0x00000000, 0x00000001, 0x00000001,
    0x00000e01, 0x545f5653, 0x45475241, 0xabab0054, 0x58454853, 0x00000104, 0x00000050, 0x00000041,
    0x0100086a, 0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x04001858, 0x00107000, 0x00000000,
    0x00005555, 0x04002064, 0x00101032, 0x00000000, 0x00000001, 0x03000065, 0x001020f2, 0x00000000,
    0x03000065, 0x00102012, 0x00000001, 0x02000068, 0x00000002, 0x0600001b, 0x001000c2, 0x00000000,
    0x00208006, 0x00000000, 0x00000000, 0x0500001b, 0x00100032, 0x00000000, 0x00101046, 0x00000000,
    0x8b0000df, 0x800000c2, 0x00155543, 0x001000f2, 0x00000000, 0x00100012, 0x00000001, 0x00100e46,
    0x00000000, 0x00107e46, 0x00000000, 0x05000036, 0x001020f2, 0x00000000, 0x00100e46, 0x00000000,
    0x050000ea, 0x00100012, 0x00000000, 0x0010000a, 0x00000001, 0x09000037, 0x00102012, 0x00000001,
    0x0010000a, 0x00000000, 0x00004001, 0x00000001, 0x00004001, 0x00000000, 0x0100003e, 0x30494653,
    0x00000008, 0x00000100, 0x00000000,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE texture_feedback_ld_dxbc = { texture_feedback_ld_code_dxbc, sizeof(texture_feedback_ld_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
static const BYTE texture_feedback_ld_code_dxil[] =
{
    0x44, 0x58, 0x42, 0x43, 0x0b, 0x17, 0x21, 0xf6, 0x14, 0x1f, 0xbc, 0xa5, 0x17, 0x07, 0x43, 0x8a, 0x10, 0x3b, 0xb6, 0xba, 0x01, 0x00, 0x00, 0x00, 0x4c, 0x09, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00, 0xd0, 0x01, 0x00, 0x00, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74,
    0x69, 0x6f, 0x6e, 0x00, 0x4f, 0x53, 0x47, 0x31, 0x54, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x00, 0x00, 0x00,
    0x50, 0x53, 0x56, 0x30, 0xcc, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69,
    0x6e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44, 0x03,
    0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x41, 0x10,
    0x01, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0xbe, 0x13, 0xde, 0x5c, 0xfb, 0xe5, 0xbc, 0x15, 0xc6, 0x08, 0x1e, 0x59, 0xc1, 0x46, 0x4d, 0x44, 0x58, 0x49, 0x4c, 0x74, 0x07, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xdd, 0x01, 0x00, 0x00,
    0x44, 0x58, 0x49, 0x4c, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x5c, 0x07, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62,
    0x80, 0x18, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42, 0xc4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x62, 0x88, 0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42,
    0xe4, 0x48, 0x0e, 0x90, 0x11, 0x23, 0xc4, 0x50, 0x41, 0x51, 0x81, 0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x31, 0x46, 0x06, 0x51, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff,
    0xff, 0xff, 0xff, 0x07, 0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20, 0x6d, 0x30, 0x86, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x09, 0xa8, 0x00, 0x49, 0x18, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42, 0x20, 0x4c, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x32, 0x22, 0x88, 0x09, 0x20, 0x64, 0x85, 0x04,
    0x13, 0x23, 0xa4, 0x84, 0x04, 0x13, 0x23, 0xe3, 0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x8c, 0x8c, 0x0b, 0x84, 0xc4, 0x4c, 0x10, 0x88, 0xc1, 0x08, 0x40, 0x09, 0x00, 0x0a, 0x66, 0x00, 0xe6, 0x08,
    0xc0, 0x60, 0x8e, 0x00, 0x29, 0xc6, 0x40, 0x10, 0x44, 0x41, 0x90, 0x51, 0x0c, 0x80, 0x20, 0x88, 0x62, 0x20, 0xa4, 0x18, 0x00, 0x41, 0x10, 0x05, 0x41, 0xca, 0x4d, 0xc3, 0xe5, 0x4f, 0xd8, 0x43,
    0x48, 0xfe, 0x4a, 0x48, 0x2b, 0x31, 0xf9, 0xc5, 0x6d, 0xa3, 0x62, 0x18, 0x86, 0x81, 0xa0, 0xe2, 0x9e, 0xe1, 0xf2, 0x27, 0xec, 0x21, 0x24, 0x3f, 0x04, 0x9a, 0x61, 0x21, 0x50, 0xd0, 0x14, 0x85,
    0x21, 0x1c, 0x82, 0x20, 0x08, 0x82, 0x20, 0xe8, 0x99, 0x23, 0x08, 0xca, 0x10, 0x11, 0x04, 0x49, 0x47, 0x0d, 0x97, 0x3f, 0x61, 0x0f, 0x21, 0xf9, 0xdc, 0x46, 0x15, 0x2b, 0x31, 0xf9, 0xc5, 0x6d,
    0x23, 0x62, 0x18, 0x86, 0xa1, 0x10, 0x14, 0xe1, 0x10, 0x54, 0x15, 0xc3, 0x21, 0x0a, 0x82, 0x88, 0xe8, 0x1a, 0x08, 0x18, 0x46, 0x20, 0x86, 0x99, 0xda, 0x60, 0x1c, 0xd8, 0x21, 0x1c, 0xe6, 0x61,
    0x1e, 0xdc, 0x80, 0x16, 0xca, 0x01, 0x1f, 0xe8, 0xa1, 0x1e, 0xe4, 0xa1, 0x1c, 0xe4, 0x80, 0x14, 0xf8, 0xc0, 0x1e, 0xca, 0x61, 0x1c, 0xe8, 0xe1, 0x1d, 0xe4, 0x81, 0x0f, 0xcc, 0x81, 0x1d, 0xde,
    0x21, 0x1c, 0xe8, 0x81, 0x0d, 0xc0, 0x80, 0x0e, 0xfc, 0x00, 0x0c, 0xfc, 0x40, 0x0f, 0xf4, 0xa0, 0x1d, 0xd2, 0x01, 0x1e, 0xe6, 0xe1, 0x17, 0xe8, 0x21, 0x1f, 0xe0, 0xa1, 0x1c, 0x50, 0x40, 0xcc,
    0x24, 0x06, 0xe3, 0xc0, 0x0e, 0xe1, 0x30, 0x0f, 0xf3, 0xe0, 0x06, 0xb4, 0x50, 0x0e, 0xf8, 0x40, 0x0f, 0xf5, 0x20, 0x0f, 0xe5, 0x20, 0x07, 0xa4, 0xc0, 0x07, 0xf6, 0x50, 0x0e, 0xe3, 0x40, 0x0f,
    0xef, 0x20, 0x0f, 0x7c, 0x60, 0x0e, 0xec, 0xf0, 0x0e, 0xe1, 0x40, 0x0f, 0x6c, 0x00, 0x06, 0x74, 0xe0, 0x07, 0x60, 0xe0, 0x07, 0x48, 0xd0, 0x36, 0xe2, 0x8e, 0x00, 0x22, 0x43, 0x42, 0xc1, 0x40,
    0x5e, 0x1a, 0x10, 0x73, 0x04, 0xa0, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xaf, 0x50, 0x0e, 0x6d, 0xd0, 0x0e,
    0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x73, 0x20,
    0x07, 0x6d, 0x90, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74,
    0xd0, 0x06, 0xe6, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe6, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07,
    0x6d, 0xe0, 0x0e, 0x78, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x43, 0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86,
    0x3c, 0x06, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x79, 0x10, 0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xf2, 0x28, 0x40, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xe4, 0x79, 0x80, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc8, 0x23, 0x01, 0x01, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x90, 0xa7, 0x02, 0x02, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0xcf, 0x05, 0x04, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x20, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14, 0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x22, 0x4a, 0x60, 0x04, 0xa0, 0x20, 0x8a, 0xa1, 0x08, 0x4a, 0xa2, 0x10, 0xca,
    0xa0, 0x3c, 0xa8, 0x28, 0x89, 0x32, 0x28, 0x84, 0x11, 0x80, 0x02, 0x29, 0x85, 0x12, 0xa0, 0xb0, 0x00, 0x81, 0xe8, 0x9b, 0x01, 0x20, 0x70, 0x2c, 0x83, 0x28, 0xbe, 0x0f, 0x00, 0xa8, 0x9b, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0x44, 0x8f, 0x0c, 0x6f, 0xec, 0xed, 0x4d, 0x0c, 0x24, 0xc6, 0x05, 0xc7, 0x45,
    0x86, 0x06, 0x66, 0xc6, 0x65, 0x86, 0x06, 0x04, 0x65, 0x2c, 0xc7, 0xc6, 0x06, 0x26, 0x0c, 0x67, 0x0c, 0x26, 0x65, 0x43, 0x10, 0x4c, 0x10, 0x08, 0x64, 0x82, 0x40, 0x24, 0x1b, 0x84, 0x81, 0x98,
    0x20, 0x10, 0xca, 0x06, 0x61, 0x30, 0x28, 0xc0, 0xcd, 0x4d, 0x10, 0x88, 0x65, 0xc3, 0x80, 0x24, 0xc4, 0x04, 0xa1, 0xdb, 0x08, 0x4c, 0x10, 0x08, 0x66, 0x82, 0x40, 0x34, 0x1b, 0x04, 0xc2, 0xd9,
    0x90, 0x10, 0x0b, 0x43, 0x10, 0x43, 0x43, 0x3c, 0x1b, 0x02, 0x68, 0x82, 0xf0, 0x65, 0x13, 0x04, 0xc2, 0xd9, 0x80, 0x10, 0x12, 0x43, 0x10, 0xc3, 0x04, 0x6c, 0x08, 0xa8, 0x0d, 0x44, 0x04, 0x54,
    0xc0, 0x04, 0x01, 0x0c, 0xb4, 0x0d, 0xc1, 0x35, 0x41, 0x10, 0x00, 0x12, 0x6d, 0x61, 0x69, 0x6e, 0x5c, 0xa6, 0xac, 0xbe, 0xa0, 0xde, 0xe6, 0xd2, 0xe8, 0xd2, 0xde, 0xdc, 0x26, 0x08, 0x45, 0x34,
    0x41, 0x28, 0xa4, 0x0d, 0x01, 0x31, 0x41, 0x28, 0xa6, 0x09, 0x42, 0x41, 0x4d, 0x10, 0x88, 0x67, 0x83, 0x10, 0x06, 0x61, 0xb0, 0x61, 0x21, 0x36, 0xae, 0xf3, 0xbe, 0xe1, 0x23, 0xc0, 0x40, 0x0c,
    0x36, 0x04, 0x63, 0xc0, 0x64, 0xca, 0xea, 0x8b, 0x2a, 0x4c, 0xee, 0xac, 0x8c, 0x6e, 0x82, 0x50, 0x54, 0x13, 0x04, 0x02, 0xda, 0x20, 0x84, 0xc1, 0x19, 0x6c, 0x58, 0x88, 0x32, 0xe0, 0xcc, 0xc0,
    0x03, 0x83, 0xe1, 0x23, 0xc0, 0x00, 0x0d, 0x26, 0x08, 0x85, 0xb5, 0x21, 0x18, 0x26, 0x08, 0xc5, 0xb5, 0x41, 0x08, 0x83, 0x61, 0xc3, 0x32, 0x94, 0x81, 0x1a, 0x98, 0xc1, 0x1a, 0x80, 0xc1, 0xc0,
    0x06, 0x03, 0x18, 0xb4, 0xc1, 0x06, 0x21, 0x0d, 0xdc, 0x60, 0xc3, 0x40, 0x06, 0x6f, 0x00, 0x4c, 0x10, 0xc2, 0x00, 0xdb, 0x20, 0x10, 0x71, 0xb0, 0xa1, 0xc8, 0x34, 0x38, 0xb0, 0xe4, 0xa0, 0x0a,
    0x1b, 0x9b, 0x5d, 0x9b, 0x4b, 0x1a, 0x59, 0x99, 0x1b, 0xdd, 0x94, 0x20, 0xa8, 0x42, 0x86, 0xe7, 0x62, 0x57, 0x26, 0x37, 0x97, 0xf6, 0xe6, 0x36, 0x25, 0x20, 0x9a, 0x90, 0xe1, 0xb9, 0xd8, 0x85,
    0xb1, 0xd9, 0x95, 0xc9, 0x4d, 0x09, 0x8c, 0x3a, 0x64, 0x78, 0x2e, 0x73, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x82, 0xa4, 0x0c, 0x19, 0x9e, 0x8b, 0x5c, 0xd9, 0xdc,
    0x5b, 0x9d, 0xdc, 0x58, 0xd9, 0xdc, 0x94, 0xa0, 0xaa, 0x43, 0x86, 0xe7, 0x62, 0x97, 0x56, 0x76, 0x97, 0x44, 0x36, 0x45, 0x17, 0x46, 0x57, 0x36, 0x25, 0xb8, 0xea, 0x90, 0xe1, 0xb9, 0x94, 0xb9,
    0xd1, 0xc9, 0xe5, 0x41, 0xbd, 0xa5, 0xb9, 0xd1, 0xcd, 0x4d, 0x09, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c, 0x66,
    0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3, 0x8c, 0x42, 0x80, 0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed, 0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e,
    0xc2, 0xc1, 0x1d, 0xce, 0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83, 0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78, 0x8c, 0x74, 0x70, 0x07, 0x7b,
    0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70, 0x07, 0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc, 0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3, 0xf0,
    0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d, 0xde, 0x21, 0x1c, 0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83, 0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83,
    0x3c, 0x84, 0x03, 0x3b, 0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68, 0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60, 0x07, 0x76, 0x28, 0x07, 0x76,
    0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80, 0x87, 0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98, 0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec, 0x30,
    0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xcc, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d, 0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43,
    0x39, 0x98, 0x43, 0x39, 0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03, 0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03, 0x3b, 0xb0, 0xc3, 0x0c, 0xc4,
    0x21, 0x07, 0x7c, 0x70, 0x03, 0x7a, 0x28, 0x87, 0x76, 0x80, 0x87, 0x19, 0xd1, 0x43, 0x0e, 0xf8, 0xe0, 0x06, 0xe4, 0x20, 0x0e, 0xe7, 0xe0, 0x06, 0xf6, 0x10, 0x0e, 0xf2, 0xc0, 0x0e, 0xe1, 0x90,
    0x0f, 0xef, 0x50, 0x0f, 0xf4, 0x00, 0x00, 0x00, 0x71, 0x20, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x66, 0xb0, 0x0d, 0x97, 0xef, 0x3c, 0xbe, 0x10, 0x50, 0x45, 0x41, 0x44, 0xa5, 0x03, 0x0c, 0x25,
    0x61, 0x00, 0x02, 0xe6, 0x17, 0xb7, 0x6d, 0x05, 0x60, 0x30, 0x5c, 0xbe, 0xf3, 0xf8, 0xc2, 0x41, 0x08, 0x8a, 0x26, 0x08, 0x84, 0x24, 0x7d, 0xd4, 0xb2, 0x60, 0x26, 0xf0, 0x3c, 0xc4, 0xe0, 0x23,
    0xb7, 0x6d, 0x07, 0xd2, 0x70, 0xf9, 0xce, 0xe3, 0x0b, 0x11, 0x01, 0x4c, 0x44, 0x08, 0x34, 0xc3, 0x42, 0x58, 0xc0, 0x34, 0x5c, 0xbe, 0xf3, 0xf8, 0x8b, 0x03, 0x0c, 0x62, 0xf3, 0x50, 0x93, 0x5f,
    0xdc, 0xb6, 0x09, 0x54, 0xc3, 0xe5, 0x3b, 0x8f, 0x2f, 0x4d, 0x4e, 0x44, 0xa0, 0xd4, 0xf4, 0x50, 0x93, 0x5f, 0xdc, 0xb6, 0x0d, 0x54, 0xc3, 0xe5, 0x3b, 0x8f, 0x2f, 0x4d, 0x4e, 0x44, 0xa0, 0xd4,
    0xf4, 0x50, 0x93, 0x8f, 0xdc, 0xb6, 0x11, 0x54, 0xc3, 0xe5, 0x3b, 0x8f, 0x3f, 0x11, 0xd7, 0x44, 0x45, 0x44, 0xe9, 0x00, 0x83, 0x5f, 0xdc, 0xb6, 0x01, 0x10, 0x0c, 0x80, 0x34, 0x00, 0x00, 0x00,
    0x61, 0x20, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x13, 0x04, 0x41, 0x2c, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x44, 0x94, 0xc2, 0x0c, 0x40, 0xc9, 0x95, 0x5d, 0x11, 0x06, 0x94, 0x63,
    0x00, 0x15, 0x45, 0x40, 0xd1, 0x08, 0x00, 0x00, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x70, 0x75, 0x06, 0xb4, 0x6d, 0xc1, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x5c, 0xde, 0x31, 0x70, 0x9c, 0x30,
    0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x46, 0x19, 0x60, 0x5d, 0x27, 0x25, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x60, 0x98, 0x41, 0xe6, 0x79, 0x90, 0x32, 0x62, 0x70, 0x00, 0x20, 0x08, 0x06, 0x95,
    0x18, 0x24, 0xc3, 0x37, 0x9a, 0x10, 0x00, 0x17, 0x10, 0x74, 0x05, 0x41, 0x57, 0x10, 0x34, 0x62, 0xd0, 0x00, 0x20, 0x08, 0x06, 0x4f, 0x1a, 0x34, 0xc9, 0x20, 0x04, 0x10, 0x19, 0x90, 0x01, 0x34,
    0x9a, 0x10, 0x00, 0xa3, 0x09, 0x42, 0x30, 0x9a, 0x30, 0x08, 0xa3, 0x09, 0xc4, 0x30, 0x9a, 0x50, 0x10, 0x23, 0x06, 0x06, 0x00, 0x82, 0x60, 0x20, 0xb9, 0x81, 0x14, 0x8c, 0x18, 0x24, 0x00, 0x08,
    0x82, 0x01, 0x22, 0x07, 0xd8, 0x1a, 0xac, 0x01, 0x18, 0x18, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x80, 0xc8, 0x01, 0xb6, 0x06, 0x6b, 0xd0, 0x15, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x80, 0xc8,
    0x01, 0xb6, 0x06, 0x6b, 0x20, 0x11, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x80, 0xc8, 0x01, 0xb6, 0x06, 0x6b, 0x20, 0x06, 0xc3, 0x05, 0x44, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0x22, 0x07,
    0x59, 0x1b, 0xb0, 0x41, 0x18, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE texture_feedback_ld_dxil = { texture_feedback_ld_code_dxil, sizeof(texture_feedback_ld_code_dxil) };
#undef UNUSED_ARRAY_ATTR