<template>
    <div class="settings">
      <h2>Settings</h2>
      <form>
        <label for="temp-alert">Temperature Alert Threshold (°C)</label>
        <input type="number" v-model="temperatureAlert" />
        
        <label for="humidity-alert">Humidity Alert Threshold (%)</label>
        <input type="number" v-model="humidityAlert" />
        
        <button type="submit">Save Settings</button>
      </form>
    </div>
  </template>
  
  <script>
  export default {
    data() {
      return {
        temperatureAlert: 25,
        humidityAlert: 60
      };
    }
  };
  </script>
  
  <style scoped>
  .settings {
    max-width: 400px;
    margin: 0 auto;
  }
  form {
    display: flex;
    flex-direction: column;
  }
  </style>  