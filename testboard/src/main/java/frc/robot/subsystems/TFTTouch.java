package frc.robot.subsystems;

import edu.wpi.first.wpilibj2.command.SubsystemBase;

import java.nio.ByteBuffer;

import edu.wpi.first.wpilibj.I2C;
import edu.wpi.first.wpilibj.I2C.Port;

public class TFTTouch extends SubsystemBase{
    I2C i2c;
    byte[] toSend = new byte[1];
    byte[] toGet = new byte[1];


    public TFTTouch() {
        i2c = new I2C(Port.kMXP, 4);
    }

    public void sendData(byte[] data) {
        i2c.transaction(data, 1, toGet, 1);
    }

    public byte[] getData() {
        byte[] reply = new byte[1];
        i2c.transaction(null, 1, reply, 1);
        return reply;
    }

    @Override
    public void periodic() {

    }
    
}
