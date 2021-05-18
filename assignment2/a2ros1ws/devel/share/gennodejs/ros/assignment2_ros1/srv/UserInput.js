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

class UserInputRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.user_input = null;
    }
    else {
      if (initObj.hasOwnProperty('user_input')) {
        this.user_input = initObj.user_input
      }
      else {
        this.user_input = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type UserInputRequest
    // Serialize message field [user_input]
    bufferOffset = _serializer.int64(obj.user_input, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type UserInputRequest
    let len;
    let data = new UserInputRequest(null);
    // Deserialize message field [user_input]
    data.user_input = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assignment2_ros1/UserInputRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '219983341b37e0e830bb7bc06656544f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 user_input
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new UserInputRequest(null);
    if (msg.user_input !== undefined) {
      resolved.user_input = msg.user_input;
    }
    else {
      resolved.user_input = 0
    }

    return resolved;
    }
};

class UserInputResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type UserInputResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type UserInputResponse
    let len;
    let data = new UserInputResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assignment2_ros1/UserInputResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '358e233cde0c8a8bcfea4ce193f8fc15';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new UserInputResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    return resolved;
    }
};

module.exports = {
  Request: UserInputRequest,
  Response: UserInputResponse,
  md5sum() { return '58c0c42efd219b57a84a9b7f48b80cad'; },
  datatype() { return 'assignment2_ros1/UserInput'; }
};
