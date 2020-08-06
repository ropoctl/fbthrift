/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.module2;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@ThriftStruct(value="BigStruct", builder=BigStruct.Builder.class)
public final class BigStruct {
    private BitSet __isset_bit_vector = new BitSet();

    @ThriftConstructor
    public BigStruct(
        @ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.module2.Struct s,
        @ThriftField(value=2, name="id", requiredness=Requiredness.NONE) final int id
    ) {
        this.s = s;
        this.id = id;
    }
    
    @ThriftConstructor
    protected BigStruct() {
      this.s = null;
      this.id = 0;
    }
    
    public static class Builder {
        private final BitSet __optional_isset = new BitSet();
    
        private test.fixtures.module2.Struct s = null;
        private int id = 0;
    
        @ThriftField(value=1, name="s", requiredness=Requiredness.NONE)
        public Builder setS(test.fixtures.module2.Struct s) {
            this.s = s;
            return this;
        }
    
        public test.fixtures.module2.Struct getS() { return s; }
    
            @ThriftField(value=2, name="id", requiredness=Requiredness.NONE)
        public Builder setId(int id) {
            this.id = id;
            return this;
        }
    
        public int getId() { return id; }
    
        public Builder() { }
        public Builder(BigStruct other) {
            this.s = other.s;
            this.id = other.id;
        }
    
        @ThriftConstructor
        public BigStruct build() {
            BigStruct result = new BigStruct (
                this.s,
                this.id
            );
            result.__isset_bit_vector.or(__optional_isset);
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, Object> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("BigStruct");
    private final test.fixtures.module2.Struct s;
    public static final int _S = 1;
    private static final TField S_FIELD_DESC = new TField("s", TType.STRUCT, (short)1);
        private final int id;
    public static final int _ID = 2;
    private static final TField ID_FIELD_DESC = new TField("id", TType.I32, (short)2);
    static {
      NAMES_TO_IDS.put("s", 1);
      FIELD_METADATA.put(1, S_FIELD_DESC);
      NAMES_TO_IDS.put("id", 2);
      FIELD_METADATA.put(2, ID_FIELD_DESC);
    }
    
    @ThriftField(value=1, name="s", requiredness=Requiredness.NONE)
    public test.fixtures.module2.Struct getS() { return s; }
        
    /** don't use this method for new code, it's here to make migrating to swift easier */
    @Deprecated
    public boolean fieldIsSetS() {
        return this.s != null;
    }
    
    
    @ThriftField(value=2, name="id", requiredness=Requiredness.NONE)
    public int getId() { return id; }
        
    /** don't use this method for new code, it's here to make migrating to swift easier */
    @Deprecated
    public boolean fieldIsSetId() {
        return __isset_bit_vector.get(_ID);
    }
    
    @Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("s", s);
        helper.add("id", id);
        return helper.toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        BigStruct other = (BigStruct)o;
    
        return
            Objects.equals(s, other.s) &&
            Objects.equals(id, other.id) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            s,
            id
        });
    }
    
    
    public static BigStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(BigStruct.NAMES_TO_IDS, BigStruct.FIELD_METADATA);
      BigStruct.Builder builder = new BigStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _S:
          if (__field.type == TType.STRUCT) {
            test.fixtures.module2.Struct s = test.fixtures.module2.Struct.read0(oprot);
            builder.setS(s);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ID:
          if (__field.type == TType.I32) {
            int id = oprot.readI32();
            builder.setId(id);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.s != null) {
        oprot.writeFieldBegin(S_FIELD_DESC);
        this.s.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(ID_FIELD_DESC);
      oprot.writeI32(this.id);
      oprot.writeFieldEnd();
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
