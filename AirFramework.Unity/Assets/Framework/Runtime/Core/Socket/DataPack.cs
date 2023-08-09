namespace AirFramework
{

    /* +---------------+---------------+-----------+------------+---------+
    |     Conv      |   Cmd + Frg   |   Wnd     |    Ts      | Sn      |
    |   (4 bytes)   |   (1 byte)    |  (2 bytes)| (4 bytes)  | (4 bytes)|
    +---------------+---------------+-----------+------------+---------+
    |                            Una      (4 bytes)                  |
    +---------------------------------------------------------------+
    |                            Res      (4 bytes)                  |
    +---------------------------------------------------------------+
    |                            Length   (4 bytes)                  |
    +---------------------------------------------------------------+
    |                      Data (Length bytes)                       |
    +---------------------------------------------------------------+ */


    /*Conv (Conversation ID)：4字节，用于标识通信会话的ID，它可以用于区分不同的KCP连接。通常在连接建立时由服务器和客户端约定，以确保通信双方的数据包被正确处理。

    Cmd (Command) + Frg (Fragment)：1字节，组合字段，包含了一个字节的命令信息和一个字节的分片信息。命令信息用于指示数据包的类型（如ACK、数据等），分片信息用于指示数据包是否分片以及分片序号。具体的命令和分片信息的取值在KCP协议规范中有定义。

    Wnd (Window Size)：2字节，表示接收窗口的大小。这个值用于告诉发送端接收端还能接收多少个数据包，从而进行流量控制。

    Ts (Timestamp)：4字节，表示时间戳，记录数据包的发送或接收时间，用于计算往返时间（RTT）等。

    Sn (Sequence Number)：4字节，数据包的序列号，用于标识数据包的顺序。

    Unacknowledged (Una)：4字节，表示接收端已收到的连续的最大序列号，即已确认的最大序列号。

    Res (Reserved)：4字节，保留字段，用于未来可能的扩展。

    Length：4字节，数据长度，表示Data字段的长度。

    Data：实际的数据部分，长度由Length字段指定。*/

    [MemoryPack.MemoryPackable]
    public partial struct DataPack
    {
        public uint Conv { get; set; } // Conversation ID

        [MemoryPack.MemoryPackIgnore]
        public byte CmdFrg { get; set; } // Command and Fragment
        public ushort Wnd { get; set; } // Window Size
        public uint Ts { get; set; } // Timestamp
        public uint Sn { get; set; } // Sequence Number
        public uint Una { get; set; } // Unacknowledged
        public uint Res { get; set; } // Reserved
        public uint Length { get; set; } // Data Length
        public byte[] Data { get; set; } // Actual Data

        public byte Cmd => (byte)(CmdFrg & 0xF); // Extract Command
        public byte Frg => (byte)((CmdFrg >> 4) & 0x3); // Extract Fragment
    }
}
