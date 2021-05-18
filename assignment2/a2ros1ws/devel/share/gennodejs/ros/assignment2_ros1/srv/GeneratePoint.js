// Auto-generated. Do not edit!

// (in-package assignment2_ros1.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class GeneratePointRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.gp_call = null;
    }
    else {
      if (initObj.hasOwnProperty('gp_call')) {
        this.gp_call = initObj.gp_call
      }
      else {
        this.gp_call = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GeneratePointRequest
    // Serialize message field [gp_call]
    bufferOffset = _serializer.bool(obj.gp_call, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GeneratePointRequest
    let len;
    let data = new GeneratePointRequest(null);
    // Deserialize message field [gp_call]
    data.gp_call = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assignment2_ros1/GeneratePointRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '70ac6881fb79d423882242adf4594fab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool gp_call
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GeneratePointRequest(null);
    if (msg.gp_call !== undefined) {
      resolved.gp_call = msg.gp_call;
    }
    else {
      resolved.gp_call = false
    }

    return resolved;
    }
};

class GeneratePointResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.x = null;
      this.y = null;
    }
    else {
      if (initObj.hasOwnProperty('x')) {
        this.x = initObj.x
      }
      else {
        this.x = 0.0;
      }
      if (initObj.hasOwnProperty('y')) {
        this.y = initObj.y
      }
      else {
        this.y = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GeneratePointResponse
    // Serialize message field [x]
    bufferOffset = _serializer.float64(obj.x, buffer, bufferOffset);
    // Serialize message field [y]
    bufferOffset = _serializer.float64(obj.y, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GeneratePointResponse
    let len;
    let data = new GeneratePointResponse(null);
    // Deserialize message field [x]
    data.x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [y]
    data.y = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assignment2_ros1/GeneratePointResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '209f516d3eb691f0663e25cb750d67c1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 x
    float64 y
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GeneratePointResponse(null);
    if (msg.x !== undefined) {
      resolved.x = msg.x;
    }
    else {
      resolved.x = 0.0
    }

    if (msg.y !== undefined) {
      resolved.y = msg.y;
    }
    else {
      resolved.y = 0.0
    }

    return resolved;
    }
};

module.exports = {
  Request: GeneratePointRequest,
  Response: GeneratePointResponse,
  md5sum() { return 'd650ed2bf3c6f91efef5a89f74343ac5'; },
  datatype() { return 'assignment2_ros1/GeneratePoint'; }
};
